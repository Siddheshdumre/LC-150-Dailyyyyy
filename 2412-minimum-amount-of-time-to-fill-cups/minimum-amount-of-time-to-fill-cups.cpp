class Solution {
public:
    int fillCups(vector<int>& amount) {
        int result = 0;
        // start off by sorting in ascending order (biggest cups in back)
        sort(amount.begin(), amount.end());

        // go while the two biggest cups still need to be filled
        while (amount[1] && amount[2]) {
            // this just takes 1, because we can fill both at same time
            result++;
            // fill the two largest by 1 in this 1 second
            // we choose the two largest because we want to get more "bang" for our "buck"
            amount[1]--;
            amount[2]--;
            // keep sorting to keep biggest cups at back
            sort(amount.begin(), amount.end());
        }

        // if anything is left in biggest cup, just fill it the rest of the way
        // because we can only fill this 1 at a time anyways
        result += amount[2];

        return result;
    }
};