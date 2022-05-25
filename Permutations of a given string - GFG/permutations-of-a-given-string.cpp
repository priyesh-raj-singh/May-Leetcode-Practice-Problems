// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	
	void solve(string &S , set<string> &s ,int index){
	    if(index>=S.size()){
	        s.insert(S);
	        return ;
	    }
	    for(int i = index ; i<S.size() ; i++){
	        swap(S[index] , S[i]);
	        solve(S , s , index+1);
	        swap(S[index] , S[i]);
	    }
	}
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    set<string> s;
		    vector<string> ans;
		    int index = 0;
		    solve(S , s , index);
		    for(auto itr:s){
                ans.push_back(itr);
		    }
		    return ans;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends