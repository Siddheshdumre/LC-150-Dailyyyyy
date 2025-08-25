class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0;
        int zerocounter = 0;
        int result = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 0){
                zerocounter++;
            }
            while(zerocounter > 1){
                if(nums[left] == 0){
                    zerocounter--;
                }
                left++;
            }
            result = max(result, i - left);
        }
      return result;  
        
    }
};