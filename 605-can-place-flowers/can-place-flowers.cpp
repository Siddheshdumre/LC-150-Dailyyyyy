class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int x = flowerbed.size();
        for(int i = 0; i<x; i++ ){
            bool left , right;
            left = i == 0 || flowerbed[i-1] == 0;
            right = i == x-1 || flowerbed[i+1] == 0;

            if(left && right && flowerbed[i] == 0){
                flowerbed[i] = 1;
                n--;
            }
            
        }
        return n<=0;

    }
};