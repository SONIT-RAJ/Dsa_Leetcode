/*

Problem link - https://leetcode.com/problems/minimum-index-of-a-valid-split/description/?envType=daily-question&envId=2025-03-27

Leetcode 2780 - Minimum Index of a Valid Split

Date- 27/03/2025

TC - O(nums.size())
SC - O(nums.size())

*/
class Solution {
    public:
        int minimumIndex(vector<int>& nums) {
            int s=nums.size();
            int count=1;
            int current=nums[0];
            unordered_map<int,int>mpp;
            mpp[nums[0]]++;
            for(int i=1;i<s;i++){
                mpp[nums[i]]++;
                if(current==nums[i]){
                    count++;
                }
                else if(count>0){
                    count--;
                }
                else{
                    count++;
                    current=nums[i];
                }
            }
            unordered_map<int,int>mpp2;
            for(int i=0;i<s;i++){
                mpp2[nums[i]]++;
                if((mpp2[current]>=(i+1)/2+1)&&(mpp[current]-mpp2[current]>=(s-i-1)/2+1)){
                    return i;
                }
            }
            return -1;

        }
    };