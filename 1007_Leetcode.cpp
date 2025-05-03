/*

Problem link -  https://leetcode.com/problems/minimum-domino-rotations-for-equal-row/description/?envType=daily-question&envId=2025-05-03

Leetcode 1007 - Minimum Domino Rotations For Equal Row

Date- 03/05/2025

TC - O(n)
SC - O(1)

*/
class Solution {
    public:
        int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
            int answer=INT_MAX;
            int n=tops.size();
            for(int i=1;i<=6;i++){
                int c=0;
                for(int j=0;j<n;j++){
                    if(tops[j]==i){
                        continue;
                    }
                    else if(bottoms[j]==i){
                       c++;
                       continue;
                    }
                    else{
                        c=-1;
                        break;
                    }
                }
                if(c!=-1){
                    answer=min(answer,c);
                }
            }
            for(int i=1;i<=6;i++){
                int c=0;
                for(int j=0;j<n;j++){
                    if(bottoms[j]==i){
                        continue;
                    }
                    else if(tops[j]==i){
                       c++;
                       continue;
                    }
                    else{
                        c=-1;
                        break;
                    }
                }
                if(c!=-1){
                    answer=min(answer,c);
                }
            }
            if(answer==INT_MAX){
                return -1;
            }
            else{
                return answer;
            }
        }
    };