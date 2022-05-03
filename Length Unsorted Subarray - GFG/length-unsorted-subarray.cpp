// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> printUnsorted(int arr[], int n) {
	    int arr1[n];
	    
for(int i=0; i<n; i++)
{
	arr1[i] = arr[i]; 
}
sort(arr1, arr1+n); 
int start=0, end=0; 
for(int i=0; i<n; i++)
{
	if(arr1[i] != arr[i])
	{
		start = i;
	    break;
	}
}
for(int i=n-1; i>=0; i--)
{
	if(arr1[i] != arr[i])
	{
		end = i; 
	    break;
	}
}
	    
return {start, end};
	    // code here
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.printUnsorted(arr, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
  // } Driver Code Ends