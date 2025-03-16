/*

Problem link - https://leetcode.com/problems/minimum-time-to-repair-cars/description/?envType=daily-question&envId=2025-03-16

Leetcode 2594 - Minimum Time to Repair Cars

Date- 16/03/2025

TC - O(nlogn)
SC - O(1)

*/
class Solution {
    public:
        bool check(vector<int>& ranks,long long& mid, int& cars){
            int count=0;
            for(int i=0;i<ranks.size();i++){
                count+=sqrt(mid/ranks[i]);
                if(count>=cars){
                    return true;
                }
            }
            return false;
        }
        long long repairCars(vector<int>& ranks, int cars) {
            long long low=1;
            auto maxIt = max_element(ranks.begin(), ranks.end());
            long long high=(*maxIt)*1LL*cars*cars;
            while(low<=high){
                long long mid=low+((high-low)/2);
                if(check(ranks,mid,cars)){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            return low;
        }
    };