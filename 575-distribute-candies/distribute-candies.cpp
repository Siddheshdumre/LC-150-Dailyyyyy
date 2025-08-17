class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        int required = n/2;
        sort(candyType.begin(), candyType.end());
        int candy = 1;
        for(int i = 1; i<n; i++){
            if(candyType[i] != candyType[i-1]){
                candy++;
            }
        }
        return min(candy, required);
    }
};