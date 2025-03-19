/*

Problem link -  https://leetcode.com/problems/minimum-operations-to-make-binary-array-elements-equal-to-one-i/description/?envType=daily-question&envId=2025-03-19

Leetcode 3191 - Minimum Operations to Make Binary Array Elements Equal to One I

Date- 19/03/2025

TC - O(nums.size())
SC - O(1)

*/
class Solution {
    public:
        int minOperations(vector<int>& nums) {
            int i=0;
            int count=0;
            int size=nums.size();
            while(i<size){
                if(nums[i]==0){
                    if(i>=size-2){
                        return -1;
                    }
                    else{
                        nums[i]=1;
                        nums[i+1]=!(nums[i+1]);
                        nums[i+2]=!(nums[i+2]);
                        count++;
                    }
                }
                i++;
            }
            return count;
        }
    };