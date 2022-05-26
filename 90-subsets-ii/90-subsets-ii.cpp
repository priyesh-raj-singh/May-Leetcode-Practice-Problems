class Solution {
public:
    void generate(set<vector<int>> &s , vector<int> &emp , vector<int> &nums , int i){
        sort(nums.begin() , nums.end());
        if(i==nums.size()){
            s.insert(emp);
            return;
        }
        generate(s , emp , nums , i+1);
        emp.push_back(nums[i]);
        generate(s , emp , nums , i+1);
        emp.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> s;
        vector<int> emp;
        int i = 0 ;
        generate(s , emp , nums , i);
        
        vector<vector<int>> ans(s.begin() , s.end());
        
        return ans;
        
    }
};