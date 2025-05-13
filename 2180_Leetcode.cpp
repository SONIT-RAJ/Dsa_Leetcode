/*

Problem link - https://leetcode.com/problems/count-integers-with-even-digit-sum/description/?envType=problem-list-v2&envId=math

Leetcode 2180 - Count Integers With Even Digit Sum

Date- 13/05/2025

TC - O(logn)
SC - O(1)

*/
class Solution {
public:
    int countEven(int num) {
        int temp = num, sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum % 2 == 0 ? temp / 2 : (temp - 1) / 2;
    }
};