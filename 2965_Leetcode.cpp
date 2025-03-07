/*

Problem link - https://leetcode.com/problems/find-missing-and-repeated-values/description/?envType=daily-question&envId=2025-03-06

Leetcode 2965 - Find Missing and Repeated Values

Date- 06/03/2025

TC - O(n*n)
SC - O(n*n)

*/

class Solution {
    public:
        vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
            int sum=0;
            int n=grid.size();
            int a,b;
            unordered_map<int,int>mpp;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    int r=grid[i][j];
                    mpp[r]++;
                    if(mpp[r]==2){
                        a=r;
                    }
                    sum+=r;
                }
            }
            int s=n*n;
            int correctSum=(s*(s+1))/2;
            b=correctSum+a-sum;
            return {a,b};

        }
    };