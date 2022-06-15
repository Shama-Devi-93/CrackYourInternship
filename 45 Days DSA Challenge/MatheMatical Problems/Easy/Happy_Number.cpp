class Solution {
public:
    bool isHappy(int n) {
      set<int>myset;
        int val;
        int rem;
        while(1){
            val=0;
            while(n){
               rem=n%10;
                val+=rem*rem;
                n/=10;
            }
            if(val==1){
                return true;
            }
            else if(myset.find(val)!=myset.end()){
                return false;
            }
            myset.insert(val);
            n=val;
        }
        return false;
    }
};
