class Solution {
public:
    int calPoints(vector<string>& operations) {
        int val1;
        int val2;
        int ans = 0;
        stack<int>st;

        for(string s : operations){
            if( s == "C"){
                st.pop();
            }
            else if( s == "D" ){
                st.push(st.top() * 2);
            }
            else if( s == "+"){
                val1 = st.top();
                st.pop();
                val2 = st.top();
                st.push(val1);
                st.push(val1 + val2);
            }
            else{
                st.push(stoi(s));
            }
        }

        while(!st.empty()){
            ans +=st.top();
            st.pop();
        }

       return ans; 
    }
};