/* Problem Statement: "https://leetcode.com/problems/sort-colors/" */

class Solution {
public:
    void sortColors(vector<int>& nums) {
      int low=0, high=nums.size()-1,mid=0;
        while(low<=high){
            if(nums[low]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[low]==2){
                swap(nums[low],nums[high]);
                high--;
            }
            else{
                low++;
            }
        }

    }
};
