/* Problem Statement: "https://leetcode.com/problems/set-matrix-zeroes/" */
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int>row;
        set<int>col;
        int m=matrix[0].size(),n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        set<int>::iterator it;
        for( it=row.begin();it!=row.end();it++){
            for(int j=0;j<m;j++){
                matrix[*it][j]=0;
            }
        }
         for(it =col.begin();it!=col.end();it++){
            for(int j=0;j<n;j++){
                matrix[j][*it]=0;
            }
        }
    }
};
