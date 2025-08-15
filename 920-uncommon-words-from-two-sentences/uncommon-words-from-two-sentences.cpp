class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> freq;
        stringstream ss1(s1), ss2(s2);
        string word;

        while (ss1 >> word) freq[word]++;
        while (ss2 >> word) freq[word]++;

        vector<string> res;

        for (auto &p : freq) {
            if (p.second == 1) res.push_back(p.first);
        }

        return res;
        
    }
};