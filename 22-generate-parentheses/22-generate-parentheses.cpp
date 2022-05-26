class Solution {
public:
    void generate(vector<string> &ans ,string &s, int n , int open , int close , int index){
        if(index==2*n){
            ans.push_back(s);
            return;
        }
        
        if(open<n){
            s.push_back('(');
            generate(ans , s , n , open+1 , close , index+1);
            s.pop_back();
            
        }
        if(close<open){
            s.push_back(')');
            generate(ans , s, n , open , close+1 , index+1);
            s.pop_back();
        }
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s = "";
        generate(ans ,s, n , 0 , 0 , 0);
        return ans;
        
    }
};