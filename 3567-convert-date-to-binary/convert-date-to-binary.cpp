class Solution {
public:
    string decToBinary(int n) {
        string bin = "";
        while (n > 0) {
            bin.push_back('0' + (n % 2));
            n /= 2;
        }
        reverse(bin.begin(), bin.end());
        return bin;
    }

    string convertDateToBinary(string date) {
        string result = "";
        string numStr = "";

        for (int i = 0; i < date.size(); i++) {
            char c = date[i];

            if (c == '-') {
                int num = stoi(numStr);
                result += decToBinary(num) + "-";
                numStr = ""; 
            } else {
                numStr.push_back(c);
            }
        }

        if (!numStr.empty()) {
            int num = stoi(numStr);
            result += decToBinary(num);
        }

        return result;
    }
};
