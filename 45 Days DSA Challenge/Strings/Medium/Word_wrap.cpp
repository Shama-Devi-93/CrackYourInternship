class Solution {
public:
    int solveWordWrap(vector<int>nums, int k)
    {
        // Code here
        int n = nums.size();
        int cost[n+1][n+1] , inf = INT_MAX , c[n+1];

        for(int i=1;i<=n;i++){
            cost[i][i] = k - nums[i-1];
            for(int j=i+1;j<=n;j++){
                cost[i][j] = cost[i][j-1] - 1 - nums[j-1];
            }
        }

        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j++){
                if(cost[i][j]<0){
                    cost[i][j] = inf;
                }
                else if(j==n){
                    cost[i][j] = 0;
                }
                else{
                    cost[i][j] = pow(cost[i][j],2);
                }
            }
        }

        c[0] = 0;

        for(int i = 1;i<=n;i++){
            c[i] = inf;
            for(int j=1;j<=i;j++){
                if(c[j-1]!=inf && cost[j][i]!=inf && c[j-1]+cost[j][i]<c[i]){
                    c[i] = c[j-1]+cost[j][i];
                }
            }
        }

        return c[n];
      }
    };
