class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> v;
        v = nums;
        sort(v.begin() , v.end());
        int l = -1 , r = -1;
        
        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i]!=v[i]){
                l = i ;
                break;
            }
                
        }
        for(int i = nums.size()-1 ; i>=0 ; i--){
            if(nums[i]!=v[i]){
                r = i ;
                break;
            }
        }
        if(l==r)
            return 0;
        return r - l +1;
        
    }
};