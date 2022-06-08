class Solution {
public:
    string reverseWords(string s) {
        vector<string>s2;
        string s1="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' ' && !s1.empty()){
                s2.push_back(s1);
                s1="";
            }
            else if(s[i]!=' '){
                s1+=s[i];
            }
        }
        if(!s1.empty()){
            s2.push_back(s1);
        }
        string ans="";
        for(int i=s2.size()-1;i>=0;i--){
            ans+=s2[i];
            if(i!=0){
                ans+=" ";
            }
        }
        return ans;
    }
};
