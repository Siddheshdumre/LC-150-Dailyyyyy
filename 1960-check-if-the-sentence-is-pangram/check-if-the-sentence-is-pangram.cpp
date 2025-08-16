class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char>sett(sentence.begin(), sentence.end());
        return sett.size() ==26;
    
    }
};