/*
Method 2: Two Pointers Technique

Now let’s see how the two-pointer technique works.
We take two pointers, one representing the first element and other representing the last element of the array, 
and then we add the values kept at both the pointers. 
If their sum is smaller than X then we shift the left pointer to right 
or if their sum is greater than X then we shift the right pointer to left, 
in order to get closer to the sum. 
We keep moving the pointers until we get the sum as X.
 
https://www.geeksforgeeks.org/two-pointers-technique/

Time Complexity:  O(n log n) (As sort function is used)

Auxiliary Space: O(1), since no extra space has been taken.
*/


#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    int i=0,j,k, sum;
	    int count = 0;
	    sort(arr, arr+n);
	    for(i=0;i<n;i++){
	        sum = arr[i];
	        j=0;k=n-1;
	        while(j<k){
	            if(arr[j]+arr[k]==sum){
	                count++;
	                continue;
	            }
	            if(arr[j]+arr[k]<sum){
	                j++;
	            }
	            else{
	                k--;
	            }
	        }
	        
	    }
	    return count;
	}
};

//{ Driver Code Starts.


int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }

    return 0;
}
// } Driver Code Ends

/* 
Sample i/p
4
1 5 3 2
sample o/p
2
*/