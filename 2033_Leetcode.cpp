/*

Problem link - https://leetcode.com/problems/minimum-operations-to-make-a-uni-value-grid/description/?envType=daily-question&envId=2025-03-26

Leetcode 2033 - Minimum Operations to Make a Uni-Value Grid

Date- 26/03/2025

TC - O(m*nlog(m*n))
SC - O(m*n)

*/
class Solution {
    public:
        int minOperations(vector<vector<int>>& grid, int x) {
            vector<int>a;
            for(int i=0;i<grid.size();i++){
                for(int j=0;j<grid[0].size();j++){
                    a.push_back(grid[i][j]);
                }
            }
            sort(a.begin(),a.end());
            int equal=a[(a.size())/2];
            int operations=0;
            for(int i=0;i<a.size();i++){
                if((equal-a[i])%x==0){
                    operations+=abs((equal-a[i])/x);
                }
                else{
                    return -1;
                }
            }
            return operations;
        }
    };