/*

Problem link - https://leetcode.com/problems/check-if-grid-can-be-cut-into-sections/description/?envType=daily-question&envId=2025-03-25

Leetcode 3394 - Check if Grid can be Cut into Sections

Date- 25/03/2025

TC - O(nlogn + n)
SC - O(n)

*/
class Solution {
    public:
        bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
             sort(rectangles.begin(), rectangles.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];  // Sort by first element in ascending order
        });
        vector<vector<int>>mergeVertical;
        int start=rectangles[0][0];
        int end=rectangles[0][2];
        for(int i=1;i<rectangles.size();i++){
            if(rectangles[i][0]<end){
                end=max(end,rectangles[i][2]);
            }
            else{
                mergeVertical.push_back({start,end});
                start=rectangles[i][0];
                end=rectangles[i][2];
            }
        }
        mergeVertical.push_back({start,end});
        if(mergeVertical.size()>=3){
            return true;
        }

        sort(rectangles.begin(), rectangles.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];  // Sort by first element in ascending order
        });
        vector<vector<int>>mergeHorizontal;
        start=rectangles[0][1];
        end=rectangles[0][3];
        for(int i=1;i<rectangles.size();i++){
            if(rectangles[i][1]<end){
                end=max(end,rectangles[i][3]);
            }
            else{
                mergeHorizontal.push_back({start,end});
                start=rectangles[i][1];
                end=rectangles[i][3];
            }
        }
        mergeHorizontal.push_back({start,end});
        if(mergeHorizontal.size()>=3){
            return true;
        }
        return false;

        }
    };