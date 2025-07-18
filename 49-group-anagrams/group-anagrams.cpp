class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>> string_table;

        for(string s: strs){
            string temp = s; //temp copy of string strs 
            sort(temp.begin(), temp.end()); //sort those

            string_table[temp].push_back(s); //add Original word s to the map under key temp
        }

        vector<vector<string>> result; //create result vecotr
        for(auto& pair : string_table){
            result.push_back(pair.second);
        }
        return result;
    }
};