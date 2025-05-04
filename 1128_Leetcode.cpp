/*

Problem link - https://leetcode.com/problems/number-of-equivalent-domino-pairs/description/?envType=daily-question&envId=2025-05-04

Leetcode 1128 - Number of Equivalent Domino Pairs

Date- 04/05/2025

TC - O(n)
SC - O(n)

*/
class Solution {
    public:
        int numEquivDominoPairs(vector<vector<int>>& dominoes) {
            map<vector<int>,int>mpp;
            int answer=0;
            for(int i=0;i<dominoes.size();i++){
                answer+=mpp[{dominoes[i][0],dominoes[i][1]}];
                mpp[{dominoes[i][0],dominoes[i][1]}]++;
                if(dominoes[i][0]==dominoes[i][1]){
                    continue;
                }
                else{
                    mpp[{dominoes[i][1],dominoes[i][0]}]++;
                }
            }
            return answer;
        }
    };