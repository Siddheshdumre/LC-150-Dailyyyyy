class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 1){
                k++;
            }
        }
        if (k == 0 || k == n) return 0;

        int currentOnes = 0;

        for (int i = 0; i < k; i++) {
            currentOnes += nums[i];
        }
        int maxOnes = currentOnes;
        for (int i = 0; i < n; i++) {
            currentOnes -= nums[i];
            currentOnes += nums[(i + k) % n];
            maxOnes = max(maxOnes, currentOnes);
        }


        return k - maxOnes;


    }
};