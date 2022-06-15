class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result="";
        while(columnNumber!=0){
            columnNumber--;
           int rem=columnNumber%26;
            result=(char)(rem+65)+result;
            columnNumber/=26;
        }
        return result;
    }
};
