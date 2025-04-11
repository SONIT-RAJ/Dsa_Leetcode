/*

Problem link - https://leetcode.com/problems/count-symmetric-integers/description/?envType=daily-question&envId=2025-04-11

Leetcode 2843 - Count Symmetric Integers

Date- 11/04/2025

TC - O(high-low)
SC - O(1)

*/
class Solution {
    public:
        bool symmetric(int i){
            int number=i;
            int digits=0;
            while(i>0){
                i/=10;
                digits++;
            }
            if(digits%2==1)return false;
            int sumL=0;
            int sumF=0;
            int c=0;
            while(number>0){
                if(c>=digits/2){
                    sumF+=number%10;
                }
                else{
                    sumL+=number%10;
                }
                c++;
                number/=10;
            }
            return sumF==sumL;
        }
        int countSymmetricIntegers(int low, int high) {
            int count=0;
            for(int i=low;i<=high;i++){
                if(symmetric(i)){
                    count++;
                }
            }
            return count;

        }
    };