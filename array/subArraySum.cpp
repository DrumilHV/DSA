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

/*
sample i/p
5 12
1 2 3 7 5
sample o/p 
1 3
*/
/*
Sliding Window Technique: The technique can be best understood with the window pane in the bus, 
considering a window of length n and the pane which is fixed in it of length k. Consider,
initially the pane is at extreme left i.e.,
at 0 units from the left. Now,
co-relate the window with array arr[] of size n and pane with current_sum of size k elements.
 Now, if we apply force on the window, it moves a unit distance ahead. 
 The pane will cover the next k consecutive elements. 

Applying the sliding window technique : 

We compute the sum of the first k elements out of n terms using a linear loop and store the sum in variable window_sum.
Then we will graze linearly over the array till it reaches the end and simultaneously keep track of the maximum sum.
To get the current sum of a block of k elements just subtract the first element from the previous block and add the last element of the current block.
The below representation will make it clear how the window slides over the array.
*/