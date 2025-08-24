class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());

        int mindiff = INT_MAX;
        for(int i = 0; i < n - 1; ++i) {
            int diff = arr[i+1] - arr[i];
            if(diff < mindiff){
                mindiff = diff;
                ans.clear();
                ans.push_back({arr[i], arr[i+1]});

            }
            else if(diff == mindiff){
                ans.push_back({arr[i], arr[i+1]});
            }



        }

     return ans;   
    }
};