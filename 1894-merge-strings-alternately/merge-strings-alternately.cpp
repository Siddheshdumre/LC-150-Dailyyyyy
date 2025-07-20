class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans ="";
        int l1 = word1.length();
        int l2 = word2.length();
        int i, j;
        i =0;
        j = 0;
        while(i < l1 || j <l2 ){
            if(i < l1){
            ans += word1[i];
            i++;
            }
            if(j < l2){
            ans += word2[j];
            j++;
            }
        }
        return ans;
    }
};