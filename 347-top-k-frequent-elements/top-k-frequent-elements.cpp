bool compareByFrequency(pair<int, int>& a, pair<int, int>& b) {
    return a.second > b.second;
}

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqtable;
        for (int num : nums) {
            freqtable[num]++;
        }

        vector<pair<int, int>> freqvec(freqtable.begin(), freqtable.end());
        sort(freqvec.begin(), freqvec.end(), compareByFrequency);

        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(freqvec[i].first);
        }

        return ans;

    }
};