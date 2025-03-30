/*

Problem link - https://leetcode.com/problems/partition-labels/description/?envType=daily-question&envId=2025-03-30

Leetcode 763 - Partition Labels

Date- 30/03/2025

TC - O(n)
SC - O(1)(as ans and mpp can max be of 26 of size)

*/
class Solution {
    public:
        vector<int> partitionLabels(string s) {
            unordered_map<char,int>mpp;
            vector<int>ans;
            for(int i=0;i<s.size();i++){
                mpp[s[i]]=i;
            }
            int j=0;
            int maximum=mpp[s[0]];
            for(int i=0;i<s.size();i++){
                if(i<=maximum){
                    if(maximum<mpp[s[i]]){
                        maximum=mpp[s[i]];
                    }
                    if(maximum==s.size()-1){
                        ans.push_back(maximum-j+1);
                        break;
                    }
                }
                else{
                    ans.push_back(maximum-j+1);
                    j=i;
                    maximum=mpp[s[i]];
                    if(maximum==s.size()-1){
                        ans.push_back(maximum-j+1);
                        break;
                    }
                }
            }
            return ans;

        }
    };