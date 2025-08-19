class Solution {
public:
    bool judgeCircle(string moves) {
        int a = 0;
        int b = 0;

        for(int i = 0; i<moves.length(); i++){
            if(moves[i] == 'L'){
                a++;
            }
            else if(moves[i] == 'R'){
                a--;

            }
            else if(moves[i] == 'U'){
                b++;
            }
            else{
                b--;
            }

        }
        if(a==0 && b==0){
            return true;
        }
        else{
            return false;
        }


        
    }
};