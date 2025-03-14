/*

Problem link -  https://leetcode.com/problems/maximum-candies-allocated-to-k-children/description/?envType=daily-question&envId=2025-03-14

Leetcode 2226 - Maximum Candies Allocated to K Children

Date- 14/03/2025

TC - O(nlogn)
SC - O(1)

*/
#include <iostream>
#include <vector>
#include <algorithm>
class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long str=1,mid,end,ans=0,c=0,sum=0;
        sort(candies.begin(), candies.end());
        for(int i=0;i<candies.size();i++){
                sum=sum+candies[i];
        }
        if(sum<k) return 0;
        end=candies[candies.size()-1];
        if(k==1) return end;
        while(str<=end){
            mid=str + ((end-str)/2);
            if(mid==0)return 0;
            c=0;
            for(int i=0;i<candies.size();i++){
                c=c+(candies[i]/mid);
                if(c>=k) break;
            }
            if(c>=k){
                ans=mid;
                str=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return ans;

    }
};