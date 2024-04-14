/* You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. 
Return the maximum profit you can achieve from this transaction. 
 If you cannot achieve any profit, return 0.

 Example 1:
Input:
 prices = [7,1,5,3,6,4]
Output:
 5
Explanation:
 Buy on day 2 (price = 1) and 
sell on day 5 (price = 6), profit = 6-1 = 5.

Note
: That buying on day 2 and selling on day 1 
is not allowed because you must buy before 
you sell.

Example 2:
Input:
 prices = [7,6,4,3,1]
Output:
 0
Explanation:
 In this case, no transactions are 
done and the max profit = 0.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n<=1){
            return 0;
        }
        int start = 0;
        int end = start+1;
        int maxp = INT_MIN;
        for(int i =1;i<n;i++){
            if(prices[end]-prices[start] < 0 ){
                start = end;
            }
            end = i;
            maxp = max(maxp, prices[end]-prices[start]);
        }
        return maxp;
    }
};
int main(){
    return 0;
}