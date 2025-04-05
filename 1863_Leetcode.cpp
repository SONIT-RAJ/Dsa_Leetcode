/*

Problem link - https://leetcode.com/problems/sum-of-all-subset-xor-totals/description/?envType=daily-question&envId=2025-04-05

Leetcode 1863 - Sum of All Subset XOR Totals

Date- 05/04/2025

TC - O(2^n)
SC - O(n)

*/
class Solution {
    public:
    void gen(vector<int>& nums,int & answer,int & temp,int i){
        if(i>=nums.size()){
            answer+=temp;
            return;
        }
        temp^=nums[i];
        gen(nums,answer,temp,i+1);
        temp^=nums[i];
        gen(nums,answer,temp,i+1);

    }
        int subsetXORSum(vector<int>& nums) {
            int answer=0;
            int temp=0;
            gen(nums,answer,temp,0);
            return answer;
        }
    };