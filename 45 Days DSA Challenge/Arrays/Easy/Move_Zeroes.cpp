/* Problem Statement: "https://leetcode.com/problems/move-zeroes/" */
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int low=0, high=low+1;
        while(high<nums.size() && low<=high ){
            if(nums[low]==0 && nums[high]!=0){
                swap(nums[low],nums[high]);
                low++;
                high++;
            }
            else if(nums[low]!=0){
                low++;
                high++;
            }
            else if(nums[low]==0 && nums[high]==0){
                high++;
            }
        }
    }
};
