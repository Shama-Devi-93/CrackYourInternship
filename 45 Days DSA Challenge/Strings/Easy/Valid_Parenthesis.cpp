class Solution {
public:
    bool isValid(string s) {
        stack<char>s1;
        int top=-1;
        for(int i=0;i<s.length();i++){
            if((s[i]=='(')|| (s[i]=='{' )||( s[i]=='[')){
                s1.push(s[i]);
                top++;
            }
            else if(top>=0){
             if((s[i]==')' && s1.top()=='(') || (s[i]==']' && s1.top()=='[') || (s[i]=='}' && s1.top()=='{')){
                s1.pop();
                 top--;
            }
                else{
                    return false;
                }
            }
            else{
                return false;
            }

        }
        return s1.empty();
    }
};
