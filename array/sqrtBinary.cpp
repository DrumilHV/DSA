#include<stdio.h>

    int mySqrt(int x) {
        if(x==0 )
            return x;
          int start = 1;
          int end  = x, ans = 0;
        while (start<=end){
          int mid = start + (end-start)/2;
            // long long square = mid*mid;
            if(mid == x / mid ){
                // cout<<mid;
                return mid;
            }
            if(mid > x/mid){
                end = mid -1;
            }else{
                start = start +1;
                ans = mid;
            }

            // mid = start + (end-start)/2;
        }
        return ans;

    }

void main(){
    // std::cout<<mySqrt(10);
    int x;
    scanf("%d",&x);
    printf("%d",mySqrt(x));
}