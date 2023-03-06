/*
Given an array Arr[] of N integers. 
Find the contiguous sub-array(containing at least one number) 
which has the maximum sum and return its sum.
*/
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){ 
        int maxSoFar = INT_MIN, maxEndingHere = 0, start = 0, end  = 0, s = 0;
        for(int i = 0;i<n;i++){
            maxEndingHere += arr[i];
            if(maxSoFar < maxEndingHere){
                maxSoFar = maxEndingHere;
                start = s;
                end = i;
            }
            if(maxEndingHere < 0){
                maxEndingHere = 0;
                s = i + 1;
                
            }
            
        }
        return maxSoFar;
        
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

/*
sample i/p O/p:
-----------------------------------
Input:
N = 5
Arr[] = {1,2,3,-2,5}
Output:
9
Explanation:
Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray.
-----------------------------------
Explaination: Kadel's Algorithm
-----------------------------------
Follow the below steps to implement the idea:

Initialize the variables s, start, and end with 0 and max_so_far = INT_MIN and max_ending_here = 0
Run a for loop form 0 to N-1 and for each index i: 
Add the arr[i] to max_ending_here.
If max_so_far is less than max_ending_here then update max_so_far to max_ending_here and update start to s and end to i .
If max_ending_here < 0 then update max_ending_here = 0 and s with i+1.
Print values from index start to end.
Time Complexity: O(N)
Auxiliary Space: O(1)
-----------------------------------
https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
*/

