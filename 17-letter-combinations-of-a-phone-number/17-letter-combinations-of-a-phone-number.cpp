class Solution {
public:
    void solve(string digits , string output , string mapping[] , vector<string> &ans , int index){
        if(index>=digits.size()){
            ans.push_back(output);
            return;
        }
        int num = digits[index] - '0';
        string val = mapping[num];
        
        for(int j = 0 ; j<val.size() ; j++){
            output.push_back(val[j]);
            solve(digits , output , mapping , ans , index+1);
            output.pop_back();
            
        }
    }
    vector<string> letterCombinations(string digits) {
        int index = 0 ;
        vector<string> ans;
        if(digits.size()==0)
            return ans;
        
        string mapping[10]  = {" " , " ","abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"};
        string output;
        
        solve(digits , output ,mapping , ans , index);
        return ans;
        
    }
};