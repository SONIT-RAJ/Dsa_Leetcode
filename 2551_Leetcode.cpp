/*

Problem link - https://leetcode.com/problems/put-marbles-in-bags/description/?envType=daily-question&envId=2025-03-31

Leetcode 2551 - Put Marbles in Bags

Date- 31/03/2025

TC - O(nlogn)
SC - O(n)

*/
class Solution {
    public:
        long long putMarbles(vector<int>& weights, int k) {
            int size=weights.size();
            vector<long long>adjacent;
            for(int i=0;i<size-1;i++){
                adjacent.push_back(weights[i]+weights[i+1]);
            }
            sort(adjacent.begin(),adjacent.end());
            long long ans=0;
            for(int i=0;i<k-1;i++){
                ans+=1LL*adjacent[size-2-i]-adjacent[i];
            }
            return ans;
        }
    };