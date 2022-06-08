class Solution {
public:
    int calculate(string s) {
        stack<int>s1;
        int evalu=0;
        char operation='+';
        for(int i=0;i<s.length();i++){
        if(isdigit(s[i])){
            evalu=(evalu*10)+(s[i]-'0');
        }
       if(!isdigit(s[i])&& !iswspace(s[i]) || i==s.length()-1 ){
            if(operation == '-'){
                s1.push(-evalu);
            }
           else if(operation == '+'){
                s1.push(evalu);
            }
            if(operation == '*'){
                int stacktop=s1.top();
                s1.pop();
                s1.push(evalu*stacktop);
            }
            else if(operation == '/'){
                 int stacktop=s1.top();
                s1.pop();
                s1.push(stacktop/evalu);
            }
           operation=s[i];
           evalu=0;
            }
        }
        int result=0;
        while(!s1.empty()){
            result+=s1.top();
            s1.pop();
        }
        return result;
    }
};
