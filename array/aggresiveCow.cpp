 #include<bits/stdc++.h>
 using namespace std;
 bool isPossible(vector<int>&stalls,int  m,int n,long long mid ){
        int cows = 1;
        int lastPos = stalls[0];
        for(int i=0;i<n;i++){
            if(stalls[i]-lastPos >= mid){
                cows++;
                if(cows == m ){
                    return true;
                }
                lastPos = stalls[i];
            }
        }
        return false;
    }
    int max(long long int a , long long int b){
        return a > b ? a:b;
    }
    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(),stalls.end());
        long long int start =0;
        long long int maxi=0;
        for(int i=0;i<n;i++){
            // sum+=stalls[i];
            maxi = max(maxi, stalls[i]);
        }
        long long int end = maxi;
        long long int ans = -1;
        long long int mid = start + (end-start)/2;
        // cout<<maxi<<" ";
        while (start<=end){
            // cout<<mid<<" ";
            if(isPossible(stalls, k,n, mid )){
                start = mid +1;
                ans = mid;
            }else{
                end = mid -1;
            }
             mid = start + (end-start)/2;
        }
        return ans;
    }

int main(){
    int k = 3;
    int n = 5;
    int arr[] = {1,2,4,9,8};
    vector<int> stalls(arr, arr + n);
    cout << solve(n, k, stalls) << endl;
    
}