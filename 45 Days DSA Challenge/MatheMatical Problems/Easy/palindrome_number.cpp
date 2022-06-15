class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x%10==0 && x!=0)){
            return false;
        }
        long long reverse_number=0;
        int num=x;
        while(num>0){
            int rem=num%10;
            reverse_number=rem+reverse_number*10;
            num/=10;
        }
        return x==reverse_number;
    }
};
