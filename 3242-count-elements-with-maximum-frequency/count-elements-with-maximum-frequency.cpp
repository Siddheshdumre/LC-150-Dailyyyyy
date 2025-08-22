class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> freq;
        int maxfreq = 0;

        for(int num : nums){
            maxfreq = max(maxfreq, ++freq[num]);
        }
        int result = 0;

        for( auto& pair : freq){
            if(pair.second == maxfreq){
                result +=pair.second;
            }
        }
        return result;
    }
};