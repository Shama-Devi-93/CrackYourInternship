class Solution {
public:
    int reverse(int x) {
       long long int rev_number=0,neg=0;
        while(x!=0){
            int rem=x%10;
            rev_number=rem+rev_number*10;
            x/=10;

        }
         if(rev_number>INT_MAX || rev_number<INT_MIN){
            return 0;
        }
        return rev_number;
    }
};
