/*

Problem link -  https://leetcode.com/problems/count-days-without-meetings/description/?envType=daily-question&envId=2025-03-24

Leetcode 3169 - Count Days Without Meetings

Date- 24/03/2025

TC - O(nlogn + n)
SC - O(n)

*/
class Solution {
    public:
        int countDays(int days, vector<vector<int>>& meetings) {
            sort(meetings.begin(),meetings.end());
            vector<vector<int>>merge;
            int start=meetings[0][0];
            int end=meetings[0][1];
            for(int i=1;i<meetings.size();i++){
                if(meetings[i][0]<=end){
                    end=max(end,meetings[i][1]);
                }
                else{
                    merge.push_back({start,end});
                    start=meetings[i][0];
                    end=meetings[i][1];
                }
            }
            merge.push_back({start,end});
            int count=0;
            for(int i=0;i<merge.size();i++){
                count+=merge[i][1]-merge[i][0]+1;
            }
            return days-count;
        }
    };