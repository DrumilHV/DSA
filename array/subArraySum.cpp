// Given an unsorted array A of size N that contains only non-negative integers,
// find a continuous sub-array that adds to a given number S and return
// the left and right index(1-based indexing) of that subarray.
// In case of multiple subarrays, return the subarray indexes which come first
// on moving from left to right.
// Note:- You have to return an ArrayList consisting of two elements left and right.
// In case no such subarray exists return an array consisting of element -1.

#include <vector>
#include<iostream>

using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
         int currentSum = arr[0], start  = 0,i;
         vector<int>res;

         //it starts from 1 and goes till =n because we are using i -1 and sum can be arr[n] so 
         // start from 1 and go till =n 
         for(i=1;i<=n;i++){
             while(currentSum > s && start< i - 1){
                 currentSum = currentSum - arr[start];
                 start++;
             }
             
             //if currentSum == sum return
             if (currentSum == s){
                 res.push_back(start + 1);
                 res.push_back(i - 1 + 1);
                 return res;
             }
             
             if(i < n){
                 currentSum = currentSum + arr[i];
             }
             
         }
         res.push_back(-1);
         return res;
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } https://www.geeksforgeeks.org/find-subarray-with-given-sum/