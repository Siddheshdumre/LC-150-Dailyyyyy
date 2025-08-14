class Solution {
public:

    int maximizeSum(vector<int>& nums, int k) {
        int start = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] > start){
                start = nums[i];
            }
        }

        int ans = 0;
        for(int i = 0; i<k; i++){
            ans += start;
            start++;
        }
        return ans;

    }
};