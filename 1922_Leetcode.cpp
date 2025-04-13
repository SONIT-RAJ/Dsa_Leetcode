/*

Problem link - https://leetcode.com/problems/count-good-numbers/description/?envType=daily-question&envId=2025-04-13

Leetcode 1922 - Count Good Numbers

Date- 13/04/2025

TC - O(logn)
SC - O(logn)

*/
class Solution {
    public:
     int m=1000000007;
        int binary_exponentiation(int a,long long b){
            if(b==0){
                return 1;
            }
            if(b%2==0){
                int half=(binary_exponentiation(a,b/2))%m;
                return 1LL*(1LL*half*half)%m;
            }
            else{
                int half=(binary_exponentiation(a,b/2))%m;
                return 1LL*(a*(1LL*half*half)%m)%m;
            }
        }
        int countGoodNumbers(long long n) {
            long long b1=(n%2==0)?n/2:n/2+1;
            int answer = ((1LL*binary_exponentiation(5,b1))%m * (1LL*binary_exponentiation(4,n-b1))%m)%m;
            return answer;

        }
    };