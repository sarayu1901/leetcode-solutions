class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum=0;
        if(n%2==0){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i==j){
                        sum+=mat[i][j];
                    }
                }
            }
            for(int i=0;i<n;i++){
                for(int j=n-1;j>=0;j--){
                    if(i+j==n-1){
                        sum+=mat[i][j];
                    }
                }
            }
        }
        if(n%2!=0){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i==j){
                        sum+=mat[i][j];
                    }
                }
            }
            for(int i=0;i<n;i++){
                for(int j=n-1;j>=0;j--){
                    if(i+j==n-1){
                        sum+=mat[i][j];
                    }
                }
            }
            int x=n/2;
            sum-=mat[x][x];
        }
        return sum;
    }
};