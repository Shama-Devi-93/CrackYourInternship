class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xorsum=0;
        for(int i=0;i<nums.size();i++){
            xorsum^=i;
            xorsum^=nums[i];
        }
        xorsum^=nums.size();
        return xorsum;
    }
};
