class Solution {
public:
    void solve(vector<int> &nums , set<vector<int>> &s , int index){
        if(index>=nums.size()){
            s.insert(nums);
            return ;
        }
        for(int i = index ; i<nums.size() ; i++){
            swap(nums[index] , nums[i]);
            solve(nums , s , index+1);
            swap(nums[index] , nums[i]);
        }
       
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int index = 0 ;
        set<vector<int>> s;
        vector<vector<int>> ans;
        solve(nums , s , index);
        for(auto it: s)
            ans.push_back(it);
        
        return ans;
        
    }
};