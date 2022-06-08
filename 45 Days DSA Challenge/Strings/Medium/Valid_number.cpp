class Solution {
public:
    bool isNumber(string s) {
        bool digitseen=false,eseen=false,dotseen=false;
        int countPlusMinus=0;
        for(int i=0;i<s.length();i++){
            if(isdigit(s[i])){
                digitseen=true;
            }
              else if(s[i]=='+' || s[i]=='-'){
                   if(countPlusMinus==2){
                       return false;
                   }
                   if(i>0 && (s[i-1]!='e' && s[i-1]!='E')){
                       return false;
                   }
                  if(i==s.length()-1){
                      return false;
                  }
                   countPlusMinus++;
               }
               else if(s[i]=='.'){
                   if(eseen || dotseen){
                       return false;
                   }
                   if(i==s.length()-1 && !digitseen ){
                       return false;
                   }
                   dotseen=true;
               }
               else if(s[i]=='e' || s[i]=='E'){
                   if(eseen || !digitseen || i==s.length()-1){
                       return false;
                   }
                   eseen=true;
               }
               else{
                   return false;
               }
        }

   return true;
    }
};
