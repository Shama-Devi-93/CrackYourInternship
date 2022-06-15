class Solution {
public:
    string addBinary(string a, string b) {
        int len1=a.length(),len2=b.length();
        if(len1<len2){
            for(int i=0;i<(len2-len1);i++){
                a='0'+a;
            }
        }
        else{
            for(int i=0;i<(len1-len2);i++){
                b='0'+b;
            }
        }
        cout<<a<<" "<<b<<endl;
        string result="";
        int j=a.length()-1,carry=0;
        while(j>=0){
            if(a[j]=='1' && b[j]=='1'){
                if(carry==0){
                result='0'+result;
                carry=1;
                }
                else{
                    result='1'+result;
                    carry=1;
                }
            }
            else if((a[j]=='1' && b[j]=='0') || (a[j]=='0' && b[j]=='1')){
                if(carry==0){
                    result='1'+result;
                }
                else{
                    result='0'+result;
                    carry=1;
                }
            }
            else if(a[j]=='0' && b[j]=='0'){
                if(carry==0){
                    result='0'+result;
                }
                else{
                    result='1'+result;
                    carry=0;
                }
            }

            j--;
        }
         if(carry==1){
                result='1'+result;
            }
        return result;
    }
};
