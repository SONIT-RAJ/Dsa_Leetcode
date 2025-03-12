/*

Problem link - https://leetcode.com/problems/roman-to-integer/

Leetcode 13 - Roman to Integer

Date- 13/03/2025

TC - O(s.size())
SC - O(1)

*/
class Solution {
    public:
        int romanToInt(string s) {
            unordered_map<char,int>mpp;
            mpp['I']=1;
            mpp['V']=5;
            mpp['X']=10;
            mpp['L']=50;
            mpp['C']=100;
            mpp['D']=500;
            mpp['M']=1000;
            int sum=0;
            for(int i=0;i<s.size();i++){
                if(i!=s.size()-1){
                    if(s[i]=='I' && (s[i+1]=='V' || s[i+1]=='X')){
                        sum-=1;
                    }
                    else if(s[i]=='X' && (s[i+1]=='L' || s[i+1]=='C')){
                        sum-=10;
                    }
                    else if(s[i]=='C' && (s[i+1]=='D' || s[i+1]=='M')){
                        sum-=100;
                    }
                    else{
                        sum+=mpp[s[i]];
                    }

                }
                else{
                    sum+=mpp[s[i]];
                }

            }
            return sum;


        }
    };