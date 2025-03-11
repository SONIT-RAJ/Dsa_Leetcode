/*

Problem link - https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/description/?envType=daily-question&envId=2025-03-11

Leetcode 1358 - Number of Substrings Containing All Three Characters

Date- 11/03/2025

TC - O(s.size())
SC - O(1)

*/
class Solution {
    public:
        int numberOfSubstrings(string s) {
            int i=0;
            int j=2;
            unordered_map<char,int>mpp;
            for(int k=i;k<=j;k++){
                mpp[s[k]]++;
            }
            int count=0;
            int size=s.size();
            while(i<size){
                if(mpp['a']!=0 && mpp['b']!=0 && mpp['c']!=0){
                    count+=size-j;
                    mpp[s[i]]--;
                    i++;

                }
                else{
                    j++;
                    if(j>=size)break;
                    mpp[s[j]]++;
                }
            }
            return count;
        }
    };