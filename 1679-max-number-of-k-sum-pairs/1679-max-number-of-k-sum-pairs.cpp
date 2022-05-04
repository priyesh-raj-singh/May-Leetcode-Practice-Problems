class Solution {
public:
    int maxOperations(vector<int>& nums, int target) {
        unordered_map<int , int> mp;
        int count = 0 ;
        
        for(int i = 0 ; i<nums.size() ; i++){
            int a = target - nums[i];
            if(mp[a]>0){
                count++;
                mp[a]--;
                
                
               
               
                
             
            }
            else
                mp[nums[i]]+=1;
        }
        return count;
        
    }
};