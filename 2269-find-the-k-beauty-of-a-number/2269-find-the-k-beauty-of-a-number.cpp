class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int count = 0;
        string s = to_string(num);
        int i = 0 , j =0  , n = s.size();
        
        while(j<n){
            if(j-i+1<k)
                j++;
            
            else if(j-i+1==k){
                string a = s.substr(i , k);
                int x = stoi(a);
                if(x!=0 and num%x==0)
                    count++;
                i++;
                j++;
            }
        }
        return count;
    }
};