/*

Problem link - https://leetcode.com/problems/sort-the-students-by-their-kth-score/description/

Leetcode 2545 - Sort the Students by Their Kth Score
Date- 10/03/2025

TC - O(mlogm)
SC - O(1)

*/
class Solution {
    public:
        static bool comparator(vector<int>& p1, vector<int>& p2, int k) {
            return p1[k] > p2[k];  // Sorting in descending order based on column k
        }

        vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
            sort(score.begin(), score.end(), [k](vector<int>& p1, vector<int>& p2) {
                return comparator(p1, p2, k);
            });
            return score;
        }
    };
