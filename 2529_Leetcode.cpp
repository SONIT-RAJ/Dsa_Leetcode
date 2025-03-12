/*

Problem link - https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/description/?envType=daily-question&envId=2025-03-12

Leetcode 2529 - Maximum Count of Positive Integer and Negative Integer

Date- 12/03/2025

TC - O(log(nums.size()))
SC - O(1)

*/
class Solution {
    public:
        int maximumCount(vector<int>& nums) {
            auto l = lower_bound(nums.begin(), nums.end(), 0);
            int negative=(l==nums.end())?nums.size():l-nums.begin();
            auto u = upper_bound(nums.begin(), nums.end(), 0);
            int positive=(u==nums.end())?0:nums.end()-u;
            return max(negative,positive);
        }
    };