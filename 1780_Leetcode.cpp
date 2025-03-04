/*

Problem link - https://leetcode.com/problems/check-if-number-is-a-sum-of-powers-of-three/description/?envType=daily-question&envId=2025-03-04

Leetcode 1780 - Check if Number is a Sum of Powers of Three

Date- 04/03/2025

TC - O(log3(n))
SC - O(1)

*/

class Solution {
    public:
        bool checkPowersOfThree(int n) {
            while(n!=0){
                if(n%3==2){
                    return false;
                }
                n/=3;
            }
            return true;

        }
    };