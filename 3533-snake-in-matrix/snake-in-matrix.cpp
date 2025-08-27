class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int i = 0;
        for (string &s : commands) {
            switch (s[0]) {
                case 'R' :
                    i++;
                    break;
                case 'L' :
                    i--;
                    break;
                case 'U' :
                    i -= n;
                    break;
                case 'D' :
                    i += n;
                    break;
            }
        }

        return i;
    }
};