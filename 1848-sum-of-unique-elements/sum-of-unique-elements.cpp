class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int>  map;
        int summ = 0;
        for(int num:nums){
            map[num]++;
        }
        for(auto &pair : map){
            if(pair.second == 1){
            summ += pair.first;
            }

        }
       return summ; 
    }
};