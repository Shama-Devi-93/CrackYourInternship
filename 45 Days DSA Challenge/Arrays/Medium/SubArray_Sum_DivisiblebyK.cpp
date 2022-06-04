class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int,int>mp;
        int count=0,i=0,curr_sum=0;
        mp[0]=1;
        while(i<nums.size()){
            curr_sum+=nums[i];
            i++;
            int rem=curr_sum%k;
            if(rem<0){
                rem+=k;
            }
            if(mp.find(rem)!=mp.end()){
                count+=mp[rem];
            }
            mp[rem]++;
        }
        return count;
    }
};
