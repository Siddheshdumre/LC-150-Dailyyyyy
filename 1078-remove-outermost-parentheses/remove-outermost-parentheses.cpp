class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        int countt = 0;
        string result = "";

        for(int i = 0; i< n ; i++){
            if(s[i]==')'){
                countt--;
            }
            if(countt != 0){
                result.push_back(s[i]);
            }

            if(s[i]=='('){
                countt++;
            }

        }

        return result;

    }
};