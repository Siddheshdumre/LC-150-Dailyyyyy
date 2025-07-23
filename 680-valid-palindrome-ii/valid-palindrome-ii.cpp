class Solution {
public:
    bool IsPalindrome (string s, int left, int right){
        while(left < right){
            if(s[left] != s[right])return false;
                left++;
                right--;
            
        }
        return true;

    }


    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while(left < right){
            if (s[left] == s[right]) {
                left++;
                right--;

            }
            else{
                return IsPalindrome( s, left+1, right) || IsPalindrome(s, left, right-1);
            }
   
    }
    return true;
    }
};