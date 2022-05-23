class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        
        sort(nums.begin() , nums.end());
        int i = 1 ; 
        int n = nums.size();
        vector<int> ans(n);
        int j = n-1;
        while(i<n){
            ans[i] = nums[j];
            i+=2;
            j--;
            
        }
         i = 0 ;
        while(i<n){
            ans[i] = nums[j];
            i+=2;
            j--;
            
        }
        for(int i = 0 ; i<n ; i++){
            nums[i] = ans[i];
        }
        
    }
};