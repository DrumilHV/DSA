//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    
    bool isPossible(int A[],int M,int N,int mid){
        int pageCount = 0;
        int studentCount = 1;
        for(int i = 0;i<N;i++){
            if(pageCount + A[i] > mid){
                studentCount++;
                if(studentCount > M || A[i] > mid ){
                    return false;
                }
                pageCount = A[i];
            }
            else{
                pageCount += A[i];
            }
        }
        return true;
        
    }
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        if(M>N){
            return -1;
        }
        int s = 0;
        int sum = 0;
        for (int i=0;i<N;i++){
            sum += A[i];
        }
        int e = sum, ans = -1;
        int mid = s + (e-s)/2;
        // int mid = (s+e)/2;
        while(s<=e){
                // cout<<" "<<mid<<" ";
            if(isPossible(A,M,N,mid)){
                ans = mid;
                e = mid -1;
            }
            else{
                s = mid + 1;
            }
            //  mid = (s+e)/2;
            mid = s + (e-s)/2;
        }
        return ans;
        
    }
}sol;

//{ Driver Code Starts.

int main() {
    // Number of pages in books
    int arr[] = { 12, 34, 67, 90,99 };
    int n = sizeof arr / sizeof arr[0];
    int m = 4; // No. of students

    cout << "Minimum number of pages = "<< sol.findPages(arr, n, m) << endl;
    return 0;
}

// } Driver Code Ends