class Solution {
public:
    int strStr(string haystack, string needle) {
        int len = haystack.length() - needle.length();

        for(int i = 0; i <= len; i++){
            string sub = haystack.substr(i, needle.length());
            if(sub == needle){
                return i;
            }
        }
        return -1;
        
    }
};