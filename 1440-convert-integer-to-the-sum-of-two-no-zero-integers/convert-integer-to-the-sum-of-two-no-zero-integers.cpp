class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> result;
        
        for(int i = 1; i < n; i++) {
            int a = i;
            int b = n - i;
            
            if(isValid(a) && isValid(b)) {
                result.push_back(a);
                result.push_back(b);
                break;
            }
        }
        
        return result;
    }
    
private: //to check if it contains 0
    bool isValid(int x) {
        while(x > 0) {
            if(x % 10 == 0)
                return false;
            x /= 10;
        }
        return true;
    }
};
