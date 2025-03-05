/*

Problem link - https://leetcode.com/problems/count-total-number-of-colored-cells/?envType=daily-question&envId=2025-03-05

Leetcode 2579 - Count Total Number of Colored Cells

Date- 05/03/2025

TC - O(1)
SC - O(1)

*/
class Solution {
    public:
        long long coloredCells(int n) {
            long long ans = 1 + ((1LL * n * (n - 1)) * 2);
            return ans;
        }
    };