class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size();
        int maxx = *max_element(salary.begin(), salary.end());
        int minn = *min_element(salary.begin(), salary.end());
        int total_salary = 0;
        for(int i= 0; i<n; i++){
            if(salary[i] != maxx && salary[i] != minn){
                total_salary += salary[i];
            }
        }

        return (double)total_salary / (n - 2);
        
    }
};