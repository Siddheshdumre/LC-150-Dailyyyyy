class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int>count_map;
        int majority = n/2;

        for(int num : nums){
            count_map[num]++;
            if(count_map[num] > majority){
                return num;
            }
        }
        return -1;
    }
};