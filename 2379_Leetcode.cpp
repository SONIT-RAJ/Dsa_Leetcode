/*

Problem link - https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/description/?envType=daily-question&envId=2025-03-08

Leetcode 2379 - Minimum Recolors to Get K Consecutive Black Blocks

Date- 08/03/2025

TC - O(blocks.size())
SC - O(1)

*/
class Solution {
    public:
        int minimumRecolors(string blocks, int k) {
            int i=0;
            int j=i+k-1;
            int count=0;
            for(int k=i;k<=j;k++){
                if(blocks[k]=='W'){
                    count++;
                }
            }
            int minimum=count;
            i++;
            j++;
            while(i<blocks.size() && j<blocks.size()){
                if(blocks[i-1]=='W'){
                    if(blocks[j]=='B'){
                        count--;
                    }
                }
                else{
                    if(blocks[j]=='W'){
                        count++;
                    }
                }
                if(minimum>count){
                    minimum=count;
                }
                i++;
                j++;
            }
            return minimum;


        }
    };