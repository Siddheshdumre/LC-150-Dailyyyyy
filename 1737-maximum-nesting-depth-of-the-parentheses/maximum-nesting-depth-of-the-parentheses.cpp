class Solution {
public:
    int maxDepth(string s) {
        int x = 0;
        int maxX = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '('){
                x++;

            }
            else if(s[i] == ')'){
                x--;
            }
            else{
                continue;
            }

            maxX = max(x,maxX );

        }
        return maxX;
    }
};