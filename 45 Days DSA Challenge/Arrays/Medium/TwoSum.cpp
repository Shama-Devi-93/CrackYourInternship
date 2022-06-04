class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int>v1,ans;
        v1=nums;
         sort(nums.begin(),nums.end());
        int i=0, j=nums.size()-1;
        while(i<j){
            if((nums[i]+nums[j])==target){
                break;
            }
            else if((nums[i]+nums[j])>target){
                j--;
            }
            else if((nums[i]+nums[j])<target){
                i++;
            }
        }
        for(int z=0;z<nums.size();z++){
            if(nums[i]==v1[z]){
                ans.push_back(z);
            }
            else if(nums[j]==v1[z]){
                ans.push_back(z);
            }
        }
        return ans;
    }
};
