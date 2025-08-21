class Solution {
public:
    int ri(vector<int>&p){
        int c=0;
        int ans=0;
        for(int i=0;i<p.size();i++){
            if(p[i]==1){
                c++;
            }
            else{
                c=0;
            }
            ans+=c;
        }
        return ans;
    }
    int numSubmat(vector<vector<int>>&a) {
        int r=a.size();
        int c=a[0].size();
        int ans=0;
        for(int i=0;i<r;i++){
            vector<int>p(c,1);
            for(int j=i;j<r;j++){
                for(int k=0;k<c;k++){
                    p[k]=(p[k]&a[j][k]);
                }
                ans+=ri(p);
            }
        }
        return ans;
    }
};