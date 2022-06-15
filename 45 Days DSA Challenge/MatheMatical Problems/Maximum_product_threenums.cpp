class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size(),product=0,prod,maxpro;
        sort(nums.begin(),nums.end());
        if(nums[n-1]<0){
            maxpro=nums[n-1]*nums[n-2]*nums[n-3];
        }
        else{
             if(nums[0]<0 && nums[1]<0){
            product=nums[0]*nums[1];
        }
             prod=nums[n-2]*nums[n-3];
            maxpro=max(product,prod)*nums[n-1];
        }

      return maxpro;

    }
};
