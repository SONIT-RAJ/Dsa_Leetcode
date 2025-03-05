/*

Problem link - https://leetcode.com/problems/break-a-palindrome/description/

Leetcode 1328 - Break a Palindrome

Date- 05/03/2025

TC - O(n)
SC - O(1)

*/
class Solution {
    public:
        string breakPalindrome(string palindrome) {
            if(palindrome.size()==1) return "";
            for(int i=0;i<palindrome.size()/2;i++){
                if(palindrome[i]=='a'){
                    continue;
                }
                palindrome[i]='a';
                return palindrome;
            }
            palindrome[palindrome.size()-1]='b';
            return palindrome;

        }
    };