/*

Problem link - https://leetcode.com/problems/count-the-hidden-sequences/description/?envType=daily-question&envId=2025-04-21

Leetcode 2145 - Count the Hidden Sequences

Date- 21/04/2025

TC - O(n)
SC - O(1)

*/
class Solution {
    public:
        int numberOfArrays(vector<int>& differences, int lower, int upper) {
            long long mini=LLONG_MAX;
            long long maxi=LLONG_MIN;
            long long sum=0;
            int n= differences.size();
            for(int i=0;i<n;i++){
                sum+=differences[i];
                mini=min(mini,sum);
                maxi=max(maxi,sum);
            }
            long long ans= min(1LL*upper,upper-maxi)-max(1LL*lower,lower-mini)+1;
            if(ans<0){
                return 0;
            }
            return ans;
        }
    };