class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()){
            return false;
        }
        string concat = goal + goal;
        int found = concat.find(s);

        if (found != -1) {
            return true;
        }
        else{
            return false;
        }
        
    }
};