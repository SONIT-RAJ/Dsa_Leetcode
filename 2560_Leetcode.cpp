/*

Problem link -  https://leetcode.com/problems/house-robber-iv/description/?envType=daily-question&envId=2025-03-15

Leetcode 2560 - House Robber IV

Date- 15/03/2025

TC - O(nlogn)
SC - O(1)

*/
class Solution {
    public:
        bool check(vector<int>&nums,int mid,int size,int k){
            int i=0;
            int count=0;
            while(i<size && count<k){
                if(nums[i]<=mid){
                    count++;
                    i+=2;
                }
                else{
                    i++;
                }
            }
            if(count>=k)return true;
            return false;
        }
        int minCapability(vector<int>& nums, int k) {
            int low=INT_MAX;
            int high=INT_MIN;
            int size = nums.size();
            for(int i=0;i<size;i++){
                if(low>nums[i]){
                    low=nums[i];
                }
                if(high<nums[i]){
                    high=nums[i];
                }
            }
            int ans=high;
            while(low<=high){
                int mid=low+((high-low)>>2);

                if(check(nums,mid,size,k)){
                    ans=mid;
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            return ans;

        }
    };