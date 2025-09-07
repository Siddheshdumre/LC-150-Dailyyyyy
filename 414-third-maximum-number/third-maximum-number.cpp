class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<long> s; 
        for(int num : nums) {
            s.insert(num);
            if(s.size() > 3) {
                s.erase(s.begin()); 
            }
        }
        
        if(s.size() == 3) {
            return *s.begin(); 
        } else {
            return *s.rbegin(); 
        }
    }
};
