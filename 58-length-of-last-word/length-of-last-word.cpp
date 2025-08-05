class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int end = s.length() - 1;

        while(end >= 0 && s[end] == ' '){
            end--;
        }

        int word = 0;

        while(end >=0 && s[end] != ' '){
            word++;
            end--;
        }
    return word;
    }
};