/*

Problem link -https://leetcode.com/problems/using-a-robot-to-print-the-lexicographically-smallest-string/description/

Leetcode 2434 - Using a Robot to Print the Lexicographically Smallest String
Date- 06/06/2025

TC - O(n)
SC - O(n)

*/
class Solution {
public:
    string robotWithString(string s) {
        int n=s.size();
        unordered_map<int,char>mpp;
        char mini=s[n-1];
        for(int i=n-2;i>=0;i--){
            mpp[i]=mini;
            mini=min(mini,s[i]);
        }
        string ans;
        stack<char>st;
        for(int i=0;i<n;i++){
            st.push(s[i]);
            if(i==n-1){
                break;
            }
            while(!(st.empty()) && st.top()<=mpp[i]){
                ans.push_back(st.top());
                st.pop();
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};
