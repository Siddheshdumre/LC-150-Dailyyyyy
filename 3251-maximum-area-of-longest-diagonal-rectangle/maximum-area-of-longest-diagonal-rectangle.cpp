class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxdiagonal = 0;
        int maxarea = 0;
        for(int i = 0; i<dimensions.size(); i++){
            int len = dimensions[i][0];
            int wid = dimensions[i][1];
            int currDiag = (len * len) + (wid * wid);

            if(currDiag > maxdiagonal || (currDiag ==maxdiagonal && len * wid > maxarea)){
                maxdiagonal = currDiag;
                maxarea = len * wid;
            }
        }
       return maxarea;       
    }
};