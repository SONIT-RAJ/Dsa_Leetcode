/*

Problem link -  https://leetcode.com/problems/zero-array-transformation-ii/description/?envType=daily-question&envId=2025-03-13

Leetcode 3356 -  Zero Array Transformation II

Date- 13/03/2025

TC - O(nums.size()+queries.size())
SC - O(nums.size())

*/
class Solution {
    public:
        int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
            vector<int>zero(nums.size()+1);
            int sum=0;
            int present=0;
            for(int i=0;i<queries.size();i++){
                while(zero[present]+sum>=nums[present]){
                        sum+=zero[present];
                        present++;
                        if(present>=nums.size()){
                            return i;
                        }
                    }
                if(queries[i][0]>present){
                    zero[queries[i][0]]+=queries[i][2];
                    zero[queries[i][1]+1]-=queries[i][2];
                }
                else if(queries[i][0]<=present && queries[i][1]>=present){
                    zero[max(queries[i][0],present)]+=queries[i][2];
                    zero[queries[i][1]+1]-=queries[i][2];
                }
                while(zero[present]+sum>=nums[present]){
                        sum+=zero[present];
                        present++;
                        if(present>=nums.size()){
                            return i+1;
                        }
                    }
            }
            return -1;
        }
    };