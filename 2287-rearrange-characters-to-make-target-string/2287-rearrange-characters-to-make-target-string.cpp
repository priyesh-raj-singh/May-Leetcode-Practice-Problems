class Solution {
public:
    int rearrangeCharacters(string s, string target) {
     unordered_map<char , int> mp1;
     unordered_map<char , int> mp2;
        
        for(int i = 0 ; i<s.size() ;i++)
            mp1[s[i]]++;
        
        for(int i =0 ; i<target.size() ; i++)
            mp2[target[i]]++;
        int ans = INT_MAX;
        
        for(auto it : mp2)
            ans = min(ans ,(mp1[it.first])/it.second );
        
        return ans;
        
        
        
        
    }
//         // sort(s.begin() , s.end());
//         // sort(target.begin() , target.end());
//         int count = 0 ;
//         int n = s.size();
//         int i = 0 ;
//         int j = 0;
//         int n1 = target.size();
//         while(i<n){
//             if(j==n1){
                
//                 j = 0 ;
//             }
//             if(s[i]==target[j] and j<n1){
//                 i++;
//                 j++;
//                 count++;
//             }
//             else
//                 i++;
            
            
            
//         }
//         return count/n1;
        
//     }
};