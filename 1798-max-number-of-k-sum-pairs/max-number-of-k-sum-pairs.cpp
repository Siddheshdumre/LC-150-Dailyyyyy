class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size() - 1;
        int paircount = 0;
        int sum;
        while(i<j){
            sum = nums[i] + nums[j]; 
            if(sum == k){
                paircount++;
                i++;
                j--;

            }
            else if(sum > k){
                j--;
            }
            else{
                i++;
            }
        }
        return paircount;
        
    }
};