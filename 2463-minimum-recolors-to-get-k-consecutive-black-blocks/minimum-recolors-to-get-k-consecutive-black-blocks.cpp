class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.length();
        int whites = 0;

        for (int i = 0; i < k; i++) {
            if (blocks[i] == 'W') whites++;
        }

        int minops = whites;

        for (int i = k; i < n; i++) {
            if (blocks[i - k] == 'W') whites--; 
            if (blocks[i] == 'W') whites++;
            minops = min(minops, whites);
        }

        return minops;
    }
};
