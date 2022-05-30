class Solution {
public:
    void solve (vector<int>&nums , int index , int temp , int &ans){
        if(index>=nums.size()){
            ans+=temp;
            return ;
        }
        
        solve(nums , index+1 , temp , ans);
        temp^= nums[index];
        solve(nums , index+1 , temp , ans);
        return ;
    }
    int subsetXORSum(vector<int>& nums) {
        int ans  = 0 ;
        solve(nums , 0 , 0 , ans );
        return ans;
        
    }
};