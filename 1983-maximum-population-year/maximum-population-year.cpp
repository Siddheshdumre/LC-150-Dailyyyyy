#include <vector>
#include <algorithm>

class Solution {
public:
    int maximumPopulation(std::vector<std::vector<int>>& logs) {
        int max_population = 0;
        int earliest_year_with_max_population = 0;

        for (int year = 1950; year <= 2049; ++year) { 
            int current_year_population = 0;
            
            for (const auto& log : logs) {
                int birth_year = log[0];
                int death_year = log[1];
                
                if (birth_year <= year && year < death_year) {
                    current_year_population++;
                }
            }
            
            if (current_year_population > max_population) {
                max_population = current_year_population;
                earliest_year_with_max_population = year;
            }
        }
        
        return earliest_year_with_max_population;
    }
};