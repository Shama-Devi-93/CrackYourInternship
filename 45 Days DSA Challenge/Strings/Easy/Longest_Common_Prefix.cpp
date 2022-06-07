class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string s1=strs[0];
        string s2=strs[strs.size()-1];
        string result="";
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i]){
                break;
            }
            result+=s1[i];
        }
        return result;
    }
};
