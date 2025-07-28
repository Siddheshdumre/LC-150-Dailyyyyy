class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int light = 0;
        int heavy = people.size() - 1;
        int boats = 0;

        while(light <= heavy){
            if(people[heavy] == limit){
                heavy --;
                boats++;
            }
            else if(people[light] + people[heavy] > limit){
                heavy--;
                boats++;
            }
            else{
                boats++;
                light++;
                heavy--;
            }
        }
        return boats;
    }
};