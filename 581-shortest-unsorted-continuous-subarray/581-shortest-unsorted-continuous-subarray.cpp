class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int left = -1 , right = -1;
        int n = nums.size();
        
        for(int i = 0 ; i<n-1 ; i++){
            if(nums[i]>nums[i+1]){
                left = i ;
                break;
            }
        }
        for(int i = n-1 ; i>=1 ; i--){
            if(nums[i-1]>nums[i]){
                right = i;
                break;
            }
        }
        if(left==-1) return 0;
        
        int mini = nums[left] , maxi = nums[left];
        for(int i = left ; i<=right ; i++){
            mini = min(mini , nums[i]);
            maxi = max(maxi , nums[i]);
        }
        left = upper_bound(nums.begin() , nums.begin()+left , mini) - nums.begin();
        right = lower_bound(nums.begin()+right+1 , nums.end() , maxi) - nums.begin();
        
        return right-left;
        
    }
};