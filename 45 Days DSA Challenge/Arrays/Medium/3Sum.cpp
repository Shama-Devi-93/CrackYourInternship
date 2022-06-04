class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //if size is less than 3 we can not find three unique elements
        if(nums.size()<3) return {};
      vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(auto i=0;i<nums.size()-2;i++){
            //to handle duplicates
            if(i==0 || (i>0 && nums[i]!=nums[i-1])){
                int j=i+1;
                int k=nums.size()-1;
                while(j<k){
                vector<int>v;
                  if(nums[i]+nums[j]+nums[k]==0){
                      v.push_back(nums[i]);
                      v.push_back(nums[j]);
                      v.push_back(nums[k]);
                      //to handle duplicates
                      while(j<k && nums[j]==nums[j+1]) j++;
                      while(j<k && nums[k]==nums[k-1]) k--;
                      ans.push_back(v);
                      j++;
                      k--;
                  }
                    else if( nums[i]+nums[j]+nums[k]>0){
                        k--;
                    }else if(nums[i]+nums[j]+nums[k]<0){
                        j++;
                    }
                }
            }
       }
            return ans;
        }

   };
