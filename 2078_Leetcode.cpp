/*

Problem link - https://leetcode.com/problems/two-furthest-houses-with-different-colors/description/?envType=problem-list-v2&envId=greedy

Leetcode 2078 - Two Furthest Houses With Different Colors

Date- 20/03/2025

TC - O(colors.size())
SC - O(1)

*/
class Solution {
    public:
        int maxDistance(vector<int>& colors) {
            int i=0,j=colors.size()-1;
            int maxDist=0;
            while(i<j){
                if(colors[j]!=colors[i])
                    maxDist=max(maxDist,j-i);
                j--;
            }
            i=0;
            j=colors.size()-1;
            while(i<j){
                if(colors[j]!=colors[i])
                    maxDist=max(maxDist,j-i);
                i++;
            }
            return maxDist;
        }
    };