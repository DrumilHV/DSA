/*
Given two sorted arrays arr1[] and arr2[] of sizes n and m in non-decreasing order.
Merge them in sorted order without using any extra space. 
Modify arr1 so that it contains the first N elements and modify arr2 so that it contains the last M elements.
*/
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        int newGap(int gap){
            if(gap <= 1){
                return 0;
            }
            else 
                return (gap / 2) + (gap % 2);
        }
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            //gap method 
            int i, j, gap = m+n;
            for(gap = newGap(gap); gap > 0 ;gap = newGap(gap)){
                //compairing withing the frist loop
                for(i=0; i + gap < n; i++){
                    if(arr1[i] > arr1[gap +i]){
                        swap(arr1[i], arr1[gap +i]);
                    }
                }
                for(j = gap > n ? gap - n: 0; i< n && j<m;j++,i++){
                    if(arr1[i]>arr2[j]){
                        swap(arr1[i],arr2[j]);
                    }
                }
                if(j<m){
                    for(j=0;j + gap < m;j++){
                        if(arr2[j]>arr2[j+gap]){
                            swap(arr2[j],arr2[j+gap]);
                        }
                    }
                }
            }
            
        } 
};


//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

/*
Input: 
n = 4, arr1[] = [1 3 5 7] 
m = 5, arr2[] = [0 2 6 8 9]
Output: 
arr1[] = [0 1 2 3]
arr2[] = [5 6 7 8 9]
Explanation:
After merging the two 
non-decreasing arrays, we get, 
0 1 2 3 5 6 7 8 9.

Approach: The idea is that we start comparing elements that are far from each other rather than adjacent. 
For every pass, we calculate the gap and compare the elements towards the right of the gap. 
Every pass, the gap reduces to the ceiling value of dividing by 2.

skip to gap Method: 
https://www.youtube.com/watch?v=hVl2b3bLzBw

alog/code:
https://www.geeksforgeeks.org/efficiently-merging-two-sorted-arrays-with-o1-extra-space/
*/