class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char,char> map = {{')', '('}, {']', '['}, {'}', '{'}};


        for(char c : s){
            if(c == '(' || c == '[' || c == '{'){
                st.push(c);
            }
            else if(!st.empty() && st.top() == map[c]){
                st.pop();
            }
            else{
                return false;
            }
        }      

        return st.empty();        

    }
};