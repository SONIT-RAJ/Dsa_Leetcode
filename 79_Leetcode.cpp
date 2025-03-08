/*

Problem link - https://leetcode.com/problems/word-search/description/

Leetcode 79 - Word Search

Date- 09/03/2025

TC - O(m×n×4^L) L is the length of the word
SC - O(m×n + L)  O(L) for the recursion call stack (depth limited by word length)

*/
class Solution {
    public:
        bool gen(vector<vector<char>>& board, string &word,vector<vector<bool>>& check,int i,int j,int& c){
            if(i<0 || j<0 || i>=board.size() || j>=board[0].size()){
                return false;
            }
            if(check[i][j]==false){
                return false;
            }
            if(c==word.size()-1){
                if(board[i][j]==word[c]){
                    return true;
                }
                return false;
            }
            if(board[i][j]!=word[c]){
                return false;
            }
            c++;
            check[i][j]=false;
            if(gen(board,word,check,i,j+1,c)){
                return true;
            }
            else if(gen(board,word,check,i+1,j,c)){
                return true;
            }
            else if(gen(board,word,check,i,j-1,c)){
                return true;
            }
            else if(gen(board,word,check,i-1,j,c)){
                return true;
            }
            c--;
            check[i][j]=true;
            return false;


        }
        bool exist(vector<vector<char>>& board, string word) {
            vector<vector<bool>>check(board.size(),vector<bool>(board[0].size(),true));
            int c=0;
            for(int i=0;i<board.size();i++){
                for(int j=0;j<board[0].size();j++){
                    if(board[i][j]!=word[0])continue;
                    if(gen(board,word,check,i,j,c)){
                        return true;
                    }
                }
            }
            return false;
        }
    };