/*
Given two arrays X and Y of positive integers,
find the number of pairs such that xy > yx (raised to power of) 
where x is an element from X and y is an element from Y.

Input: 
M = 3, X[] = [2 1 6] 
N = 2, Y[] = [1 5]
Output: 3
Explanation: 
The pairs which follow xy > yx are 
as such: 21 > 12,  25 > 52 and 61 > 16 .
*/
#include<bits/stdc++.h>
using namespace std;
 
class Solution{
    public:
    
    // X[], Y[]: input arrau
    // M, N: size of arrays X[] and Y[] respectively
    //Function to count number of pairs such that x^y is greater than y^x.
    int giveCount(int x,int  Y[], int n, int NoOfY[]){
        int ans = 0;
        if(x == 0){
            return 0;
        }
        if(x == 1 ){
            return NoOfY[0];
        }
        
        int *index = upper_bound(Y,Y+n,x);
        ans =  (Y + n) - index ;
        
        ans += (NoOfY[1] +  NoOfY[0]);
        
        if(x == 2){
            ans -= (NoOfY[3] +  NoOfY[4]);
        }
        
        if(x == 3){
            ans += NoOfY[2];
        }
        return ans;
    }
    long long countPairs(int X[], int Y[], int M, int N)
    {
        long long ans = 0;
        int NoOfY[5] = {0};
        for(int i = 0;i<N;i++){
            if(Y[i]<5){
                NoOfY[Y[i]]++;
            }
        }
        sort(Y, Y + N);
        
        for(int i=0;i<M;i++){
            ans += giveCount(X[i], Y,N, NoOfY );
        }
        
        return ans;
    }
};


//{ Driver Code Starts.
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int M,N;
		cin>>M>>N;
		int i,a[M],b[N];
		for(i=0;i<M;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<N;i++)
		{
			cin>>b[i];
		}
		Solution ob;
		cout<<ob.countPairs(a, b, M, N)<<endl;
	}
}
/*
Your Task:
This is a function problem. You only need to complete the function countPairs()
 that takes X, Y, M, N as parameters and returns the total number of pairs.

Expected Time Complexity: O((N + M)log(N)).
Expected Auxiliary Space: O(1).

=========================================>
Efficient Solution: 

The problem can be solved in O(nLogn + mLogn) time. 
The trick here is if y > x then x^y > y^x with some exceptions. 

Following are simple steps based on this trick. 

Sort array Y[].
For every x in X[], find the index idx of the smallest number greater than x 
(also called ceil of x) in Y[] using binary search, 
or we can use the inbuilt function upper_bound() in algorithm library.
All the numbers after idx satisfy the relation so just add (n-idx) to the count.
Base Cases and Exceptions: 

Following are exceptions for x from X[] and y from Y[]   

If x = 0, then the count of pairs for this x is 0.
If x = 1, then the count of pairs for this x is equal to count of 0s in Y[].
If x>1, then we also need to add count of 0s and count of 1s to the answer.
x smaller than y means x^y is greater than y^x.
x = 2, y = 3 or 4
x = 3, y = 2
Note that the case where x = 4 and y = 2 is not there

Following diagram shows all exceptions in tabular form. 
The value 1 indicates that the corresponding (x, y) form a valid pair. 

https://media.geeksforgeeks.org/wp-content/uploads/tableNumberOfPairs.png

exception table

In the following implementation, 
we pre-process the Y array and count 0, 1, 2, 3 and 4 in it, 
so that we can handle all exceptions in constant time. 
The array NoOfY[] is used to store the counts.

https://www.geeksforgeeks.org/find-number-pairs-xy-yx/

*/