/*

Problem link - https://leetcode.com/problems/closest-prime-numbers-in-range/description/?envType=daily-question&envId=2025-03-07

Leetcode 2523 - Closest Prime Numbers in Range

Date- 07/03/2025

TC - O(right*log(log(right)))
SC - O(right)

*/




class Solution {
    public:
        vector<int> closestPrimes(int left, int right) {
            vector<bool>prime(right+1,true);
            for(int i=2;i*i<=right;i++){
                if(prime[i]==true){
                    for(int j=i*i;j<=right;j+=i){
                        prime[j]=false;
                    }
                }
            }
            int first=-1;
            int second=-1;
            int past=-1;
            int present=-1;
            int minimum=right-left;
            for(int i=max(2,left);i<=max(2,right);i++){
                if(prime[i]){
                    past=present;
                    present=i;
                    if(past!=-1 && present!=-1 && minimum>=present-past){
                        if(minimum==present-past && first==-1 && second==-1){
                            first=past;
                            second=present;
                        }
                        else if(minimum>present-past){
                        first=past;
                        second=present;
                        minimum=present-past;
                        }
                    }
                }

            }
            return {first,second};
        }
    };