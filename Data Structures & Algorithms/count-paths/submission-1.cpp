class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int>up(n,1);
        for(int i = 1;i<m;i++){
            int left = 1;
            for(int j = 1;j<n;j++){
                up[j]+=left;
                left=up[j];
            }
        }
        return up[n-1];
    }
};
