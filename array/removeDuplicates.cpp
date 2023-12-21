//1047. Remove All Adjacent Duplicates In String
// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeDuplicates(string s) {
        // we make a stack 
        
        stack<char>st;
        //we run a loop to chaeck if the current element is same as the element at top
        //if so we pop the top element and we also do not put the current element in stack
        //if we continue in this fasion we have a stack at the end that only has the required output
        //if the current element is not the same ans top of stack only then we push the current element to stack
        for(auto c:s){
            if(!st.empty() && st.top()==c){
                st.pop();
            }else{
                st.push(c);
            }
        }
        //we then push all the stack elements in a string
        string ans("");
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        //we reverse the staring because when we do st.top() we get the 
        //element from the end of the stack , so we reverse the stack
        // stack -> [a,b,c] , st.top()->c so string -> cba
        //after reverse abc
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
