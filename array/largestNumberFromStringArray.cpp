/*
Given a list of non negative integers, arrange them in such a manner that they form the largest number possible.
The result is going to be very large, hence return the result in the form of a string.
----------------------------
Input: 
N = 5
Arr[] = {3, 30, 34, 5, 9}
Output: 9534330
Explanation: Given numbers are {3, 30, 34,5, 9}, 
the arrangement 9534330 gives the
largest value
----------------------------
nput: 
N = 4
Arr[] = {54, 546, 548, 60}
Output: 6054854654
Explanation: Given numbers are {54, 546,
548, 60}, the arrangement 6054854654 
gives the largest value.

*/

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	static bool myCompare(string x, string y){
	   
	   string xy = x.append(y);
	   string yx = y.append(x);
	   return xy>yx;
	    

	}
	string printLargest(vector<string> &arr) {
	 
	    sort(arr.begin(), arr.end(), myCompare);
	    
	    for(int i =0;i<arr.size();i++){
	        cout<<arr[i];
	    }
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<string> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.printLargest(arr);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
/*
A simple solution that comes to our mind is to sort all numbers in descending order,
 but simply sorting doesn’t work. For example, 548 is greater than 60,
  but in output 60 comes before 548. As a second example, 
  98 is greater than 9, but 9 comes before 98 in output.

 
So how do we go about it? The idea is to use any comparison based sorting algorithm. 
In the used sorting algorithm, instead of using the default comparison,
 write a comparison function myCompare() and use it to sort numbers.

For Python, the procedure is explained in largestNumber() function.

Given two numbers X and Y, how should myCompare() decide which number
 to put first – we compare two numbers XY (Y appended at the end of X) and YX (X appended at the end of Y).
If XY is larger, then X should come before Y in output, 
else Y should come before. For example, let X and Y be 542 and 60. To compare X and Y, 
we compare 54260 and 60542. Since 60542 is greater than 54260, we put Y first.

Following is the implementation of the above approach. 
To keep the code simple, numbers are considered as strings, 
the vector is used instead of a normal array. .

https://www.geeksforgeeks.org/given-an-array-of-numbers-arrange-the-numbers-to-form-the-biggest-number/
*/