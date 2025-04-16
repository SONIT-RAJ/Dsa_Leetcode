/*

Problem link - https://leetcode.com/problems/count-the-number-of-good-subarrays/description/?envType=daily-question&envId=2025-04-16

Leetcode 2537 - Count the Number of Good Subarrays

Date- 16/04/2025

TC - O(n)
SC - O(n)

*/
class Solution {
    public:
        long long countGood(vector<int>& nums, int k) {
            unordered_map<int,int>mpp;
            long long answer=0;
            int count=0;
            int j=0;
            int size= nums.size();
            for(int i=-1;i<size;){
                if(count>=k){
                    answer+=1LL*(nums.size()-i);
                    count-=(mpp[nums[j]]-1);
                    mpp[nums[j]]--;
                    j++;
                }
                else{
                    i++;
                    if(i==nums.size()){
                        break;
                    }
                    mpp[nums[i]]++;
                    count+=(mpp[nums[i]]-1);
                }

                if(j==nums.size()){
                        break;
                }

            }
            return answer;
        }
    };