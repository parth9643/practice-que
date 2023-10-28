class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=0;
        string temp= "";
        for(char i:s){
            if(i=='(' && count==0){
                count++;
            }
            else if(i=='(' && count>=1){
                    temp+=i;
                  count++;
            }
             else if(i==')' && count>1){
                temp+=i;
                count--;
            }
            else if(i==')' && count==1){
                count--;
            }
        }
    return temp;
    }
};
