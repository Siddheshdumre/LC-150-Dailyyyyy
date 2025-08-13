class Solution {
public:
    int sum_of_digits(int n){
        int sum = 0;
        while(n>0){
            sum += n % 10;
            n = n/10;
        }
        return sum;
    }


    int smallestIndex(vector<int>& nums) {
        for(int i= 0; i<nums.size(); i++){
            if(i == sum_of_digits(nums[i])){
                return i;
            }

        }
        return -1;
    }
};