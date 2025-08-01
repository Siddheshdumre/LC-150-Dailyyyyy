class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;

        for (char c : s) {
            freq[c]++;
        }

        priority_queue<pair<int, char>> pq;
        for (auto it : freq) {
            pq.push({it.second, it.first}); // frequency, character
        }

        string result = "";
        while(!pq.empty()){
            int f = pq.top().first;
            char c = pq.top().second;
            pq.pop();
            for(int i = 0; i<f; i++){
                result+=c;
            }
        }
        return result;
    }
    
};