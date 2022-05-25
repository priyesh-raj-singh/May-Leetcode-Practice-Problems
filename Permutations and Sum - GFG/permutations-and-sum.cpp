// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
	public:
	vector<int> permutaion(int N) {
	    // Code here
	    string s = to_string(N);
	    sort(s.begin() , s.end());
	    int count = 0;
	    int sum = 0;
	    do{
	        sum+=stoi(s);
	        count++;
	    }
	    while(next_permutation(s.begin() , s.end()));
	    return {count , sum};
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.permutaion(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
}  // } Driver Code Ends