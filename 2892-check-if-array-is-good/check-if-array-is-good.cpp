class Solution {
public:
    bool isGood(vector<int>& nums) {
        bool ans=true;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]!=i+1) {
                ans=false;
                break;}}
        if(nums[nums.size()-1]!=nums.size()-1 || nums[nums.size()-2]!=nums.size()-1) ans=false;
        return ans;
    }
};