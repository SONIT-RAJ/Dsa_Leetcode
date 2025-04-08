/*

Problem link - https://leetcode.com/problems/minimum-number-of-operations-to-make-elements-in-array-distinct/description/?envType=daily-question&envId=2025-04-08

Leetcode 3396 - Minimum Number of Operations to Make Elements in Array Distinct

Date- 08/04/2025

TC - O(n)
SC - O(n)

*/
class Solution {
    public:
        int minimumOperations(vector<int>& nums) {
            unordered_map<int,pair<int,int>>mpp;
            int count=0;
            for(int i=0;i<nums.size();i++){
                mpp[nums[i]].first++;
                if(mpp[nums[i]].first>1 and mpp[nums[i]].second==0){
                    mpp[nums[i]].second=1;
                    count++;
                }
            }
            if(count==0)return 0;
            for(int i=0;i<nums.size();i++){
                mpp[nums[i]].first--;
                if(mpp[nums[i]].first<=1 and mpp[nums[i]].second==1){
                    mpp[nums[i]].second=0;
                    count--;
                }
                if(count==0){
                    return ceil(1.0*(i+1)/3);
                }
            }
            return ceil(1.0*(nums.size())/3);
        }
    };