/*

Problem link - https://leetcode.com/problems/finding-3-digit-even-numbers/description/?envType=daily-question&envId=2025-05-12

Leetcode 2094 - Finding 3-Digit Even Numbers

Date- 12/05/2025

TC - O(n)
SC - O(n)

*/
class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> mpp(10, 0);
        for (int i = 0; i < digits.size(); i++)
            mpp[digits[i]]++;

        vector<int> res;
        for (int i = 1; i <= 9; i++) {
            if (mpp[i] == 0) continue;
            mpp[i]--;

            for (int j = 0; j <= 9; j++) {
                if (mpp[j] == 0) continue;
                mpp[j]--;
                for (int k = 0; k <= 8; k += 2) {
                    if (mpp[k] == 0) continue;
                    mpp[k]--;
                    res.push_back(i*100 + j*10 + k);
                    mpp[k]++;
                }
                mpp[j]++;

            }
            mpp[i]++;
        }
        return res;
    }
};