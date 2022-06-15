class Solution {
public:
    int minMoves(vector<int>& nums) {
        int len=nums.size(),counti=0;
        sort(nums.begin(),nums.end());
        for(int i=len-1;i>=0;i--){
            counti+=nums[i]-nums[0];
        }
        return counti;
    }
};
