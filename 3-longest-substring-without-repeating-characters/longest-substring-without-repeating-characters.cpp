class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set; //take a set of chars not string 
        int left = 0;
        int maxlength = 0;

        for(int i = 0; i< s.length(); i++){
            while(set.count(s[i])){
                set.erase(s[left]);
                left++;
            }
            set.insert(s[i]);
            int currentlength = i - left + 1;
            maxlength = max(maxlength ,currentlength );
        }

        return maxlength;
        
    }
};