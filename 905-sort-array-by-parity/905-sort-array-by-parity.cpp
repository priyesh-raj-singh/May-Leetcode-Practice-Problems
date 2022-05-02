class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> eve , odd , ans;
        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i]%2==0)
                eve.push_back(nums[i]);
            else 
                odd.push_back(nums[i]);
            
            
        }
        sort(eve.begin() , eve.end());
        sort(odd.begin() , odd.end());
        
        for(int i = 0 ; i<eve.size() ; i++)
            ans.push_back(eve[i]);
        
        for(int i = 0 ; i<odd.size();i++)
            ans.push_back(odd[i]);
        
        return ans;
        
    }
};