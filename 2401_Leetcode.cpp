/*

Problem link -  https://leetcode.com/problems/longest-nice-subarray/description/?envType=daily-question&envId=2025-03-18

Leetcode 2401 - Longest Nice Subarray

Date- 18/03/2025

TC - O(nums.size())
SC - O(1)

*/
class Solution {
    public:
        int longestNiceSubarray(vector<int>& nums) {
            int c=1;
            int maximum=1;
            int r=nums[0];
            int p=0;//track the start of subarray
            for(int i=1;i<nums.size();){
                int d=nums[i] & r;
                if(d==0){
                    r|=nums[i];
                    c++;
                    i++;
                }
                else{
                    r^=nums[p];
                    p++;
                    c--;
                }

                if(maximum<c){
                    maximum=c;
                }
            }
            return maximum;

        }
    };