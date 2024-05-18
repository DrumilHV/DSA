#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        // constider 3 pointers 
        // left , mid , right
        //start to left -1 => (sorted) all 0 's 
        //left to   mid -1 => all 1 's
        //mid-1 to right-1 => all jumbled 0's, 1's, 2's
        //right -1 to n-1  => all 2's
        int n = nums.size();
        int left = 0,
            mid  = 0,
            right= n-1;
        while(mid<n && mid<=right){
            if(nums[mid]==0){
                swap(nums[mid], nums[left]);
                left ++;
                mid++;
            }else if(nums[mid]==2){
                swap(nums[mid], nums[right]);
                mid++;
                right--;
            }else{
                mid++;
            }
        }
    }
};

