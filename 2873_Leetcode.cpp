/*

Problem link - https://leetcode.com/problems/maximum-value-of-an-ordered-triplet-i/description/?envType=daily-question&envId=2025-04-02

Leetcode 2873 - Maximum Value of an Ordered Triplet I

Date- 02/04/2025

TC - O(n)
SC - O(1)

*/
class Solution {
    public:
        long long maximumTripletValue(vector<int>& nums) {
            long maxTriplet = 0, maxElement = 0, maxDiff = 0;
            for (long num : nums) {
                maxTriplet = max(maxTriplet, maxDiff * num);
                maxDiff = max(maxDiff, maxElement - num);
                maxElement = max(maxElement, num);
            }
            return maxTriplet;
        }
    };