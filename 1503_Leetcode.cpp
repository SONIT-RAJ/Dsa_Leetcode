/*

Problem link - https://leetcode.com/problems/last-moment-before-all-ants-fall-out-of-a-plank/description/?envType=problem-list-v2&envId=brainteaser

Leetcode 1503 - Last Moment Before All Ants Fall Out of a Plank

Date- 28/03/2025

TC - O(n)
SC - O(1)

*/
class Solution {
    public:
        int getLastMoment(int n, vector<int>& left, vector<int>& right) {
            int leftmax=(left.size()!=0)?*max_element(left.begin(), left.end()):0;
            int rightmax=(right.size()!=0)?*min_element(right.begin(), right.end()):n;
            rightmax=n-rightmax;
            return max(leftmax,rightmax);
        }
    };