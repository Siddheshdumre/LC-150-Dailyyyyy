class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.length();
        int minops = INT_MAX;

        for (int i = 0; i + k <= n; i++) {
            int whites = 0;
            for (int j = i; j < i + k; j++) {
                if (blocks[j] == 'W') {
                    whites++;
                }
            }
            minops = min(minops, whites);
        }
        return minops;
    }
};
