class Solution {
public:
    string getEncryptedString(string s, int k) {
        int n = s.size();
         k = k % n;

        string ans;
        for(int i= 0; i<n; i++){

            int j = (i+k)%n;
            ans += s[j]; 

        }

       return ans; 
    }
};