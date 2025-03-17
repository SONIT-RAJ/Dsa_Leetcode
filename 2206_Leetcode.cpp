/*

Problem link - https://leetcode.com/problems/divide-array-into-equal-pairs/description/?envType=daily-question&envId=2025-03-17

Leetcode 2206 - Divide Array Into Equal Pairs

Date- 17/03/2025

TC - O(n)
SC - O(n)

*/
class Solution {
    public:
        bool divideArray(vector<int>& nums) {
            unordered_map<int,int>mpp;
            for(int i=0;i<nums.size();i++){
                mpp[nums[i]]++;
            }
            for (auto it = mpp.begin(); it != mpp.end(); ++it) {
            if((it->second)%2==1){
                return false;
            }
            }
            return true;

        }
    };