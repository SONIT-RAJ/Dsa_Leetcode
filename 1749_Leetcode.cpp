/*

Problem link - https://leetcode.com/problems/maximum-absolute-sum-of-any-subarray/description/?envType=daily-question&envId=2025-02-26

Leetcode 1749 - Maximum Absolute Sum of any subarray

Date- 26/02/2025

*/


class Solution {
    public:
        int maxAbsoluteSum(vector<int>& nums) {
            int maximum=nums[0];
            int minimum=nums[0];
            int sum1=0;
            int sum2=0;
            for(int i=0;i<nums.size();i++){
                sum1+=nums[i];
                sum2+=nums[i];
                if(maximum<sum1){
                    maximum=sum1;
                }
                if(sum1<0){
                    sum1=0;
                }
                if(minimum>sum2){
                    minimum=sum2;
                }
                if(sum2>=0){
                    sum2=0;
                }
            }
            return max(abs(maximum),abs(minimum));

        }
    };