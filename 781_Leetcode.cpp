/*

Problem link - https://leetcode.com/problems/rabbits-in-forest/description/?envType=daily-question&envId=2025-04-20

Leetcode 781 - Rabbits in Forest

Date- 20/04/2025

TC - O(n)
SC - O(1)

*/
class Solution {
    public:
        int numRabbits(vector<int>& a) {
            sort(a.begin(),a.end());
            int n=a.size();
            int total=0;
            int current=-1;
            int count=0;
            for(int i=0;i<n;i++){
                if(current!=a[i]){
                    count=1;
                    total+=a[i]+1;
                    current=a[i];
                }
                else{
                    count++;
                    if(count>a[i]+1){
                        count=1;
                        total+=a[i]+1;
                    }
                }
            }
            return total;

        }
    };