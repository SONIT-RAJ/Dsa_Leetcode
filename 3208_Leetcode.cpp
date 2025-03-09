/*

Problem link - https://leetcode.com/problems/alternating-groups-ii/?envType=daily-question&envId=2025-03-09

Leetcode  3208 - Alternating Groups II

Date- 09/03/2025

TC - O(colors.size())
SC - O(1)

*/
class Solution {
    public:
        int numberOfAlternatingGroups(vector<int>& colors, int k) {
            int c=0;
            int i=0;
            int past=colors[i];
            int j=1;
            while(i<colors.size()){
                if(j>=colors.size()){
                    j-=colors.size();
                }
                if(colors[j]==past){
                   if(j<=i)break;
                   i=j;
                   past=colors[i];
                   j++;
                   continue;
                }
                else{
                    if(i<j && j-i+1==k){
                        c++;
                        i++;
                    }
                    else if(j<i && colors.size()-i+j+1==k){
                        c++;
                        i++;

                    }
                    past=colors[j];
                    j++;
                }
            }
            return c;

        }
    };