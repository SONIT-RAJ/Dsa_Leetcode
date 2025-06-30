/*

Problem link - https://leetcode.com/problems/substring-with-concatenation-of-all-words/description/

Leetcode 30 - Substring with Concatenation of All Words

Date- 01/07/2025

TC - O(n·w·e) (or O(n·w) if substring handling is constant‑time)
SC - O(w·e + n)

*/
class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int n = s.size();
        int w = words.size();
        int e = words[0].size();
        int r = e * w;
        if (n < r) return {};

        // build target counts once
        unordered_map<string,int> mpp1;
        mpp1.reserve(w);
        for (auto &wd : words)
            mpp1[wd]++;

        vector<int> ans;
        ans.reserve(n - r + 1);

        // we’ll reuse this map for each window
        unordered_map<string,int> mpp2;
        mpp2.reserve(mpp1.size());

        for (int off = 0; off < e; off++) {
            for (int j = off; j <= n - r; j += e) {
                mpp2.clear();
                bool ok = true;

                for (int k = j; k < j + r; k += e) {
                    // extract once
                    string_view sv(&s[k], e);

                    auto it = mpp1.find(string(sv));
                    if (it == mpp1.end()) {
                        ok = false;
                        break;
                    }
                    int cnt = ++mpp2[string(sv)];
                    if (cnt > it->second) {
                        ok = false;
                        break;
                    }
                }

                if (ok)
                    ans.push_back(j);
            }
        }

        return ans;
    }
};
