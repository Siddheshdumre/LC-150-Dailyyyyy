class Solution {
public:
    string interpret(string command) {
        unordered_map<string, string> map = 
        {
            { "(al)" , "al"},
            { "()" , "o" }, 
            { "G" , "G" },
        };
        string temp = "";
        string res = "";
        for(char c:command){
            temp += c;
            if(map.count(temp)){
                res += map[temp];
                temp = "";
            }
        }
        return res;
        
    }
};