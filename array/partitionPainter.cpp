#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[],int m,int n,long long int mid){
        long long int currentPart = 1;
        long long int timeSum = 0;
        for(int i =0;i<n;i++){
            if(arr[i] + timeSum > mid){
                currentPart++;
                if(currentPart > m || arr[i]>mid){
                    return false;
                }
                timeSum = arr[i];
            }else{
                timeSum += arr[i];
            }
        }
        return true;
    }
    long long minTime(int arr[], int n, int k)
    {
       long long int start =0;
       long long int sum=0;
       for(int i = 0;i<n;i++){
           sum+=arr[i];
       }
       long long int end = sum;
       long long int ans = -1;
       long long int mid = start + (end-start)/2;
       while(start<=end){
           if(isPossible(arr,k,n,mid)){
               ans = mid;
               end = mid -1;
           }else{
               start  = mid + 1;
               
           }
           mid = start + (end-start)/2;
       }
       return ans;
    }

    int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << minTime(arr, n, k) << endl;
    return 0;
}