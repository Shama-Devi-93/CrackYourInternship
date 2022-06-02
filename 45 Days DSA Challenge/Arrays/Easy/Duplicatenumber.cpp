/*Porblem Statement: "https://leetcode.com/problems/find-the-duplicate-number/" */
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int low=0, high=nums.size()-1;

        while(low<=high){
            int mid=(low+high)/2;
            int count=0;
            for(auto x: nums){
                if(x<=mid){
                    count++;
                }
            }
            if(count>mid){
                high=mid-1;
            }
            else if(count<=mid){
                low=mid+1;
            }
        }
        return low;

    }
};
