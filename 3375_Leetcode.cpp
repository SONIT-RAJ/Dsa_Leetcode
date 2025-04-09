/*

Problem link - https://leetcode.com/problems/minimum-operations-to-make-array-values-equal-to-k/description/?envType=daily-question&envId=2025-04-09

Leetcode 3375 - Minimum Operations to Make Array Values Equal to K

Date- 09/04/2025

TC - O(n)
SC - O(n)

*/
class Solution {
    public:
        int minOperations(vector<int>& nums, int k) {
            unordered_map<int,int>mpp;
            for(int i=0;i<nums.size();i++){
                if(nums[i]>k){
                    mpp[nums[i]]++;
                }
                else if(nums[i]<k){
                    return -1;
                }
            }
            return mpp.size();


        }
    };