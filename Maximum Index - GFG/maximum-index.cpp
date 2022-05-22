// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
       int ans = INT_MIN;
       for(int i = 0 ; i<n ; i++){
           for(int j = n-1 ; j>=0 ; j--){
               if(arr[i]<=arr[j]){
                   ans = max(ans , j-i);
                   break;
               }
           }
       }
       return ans;
    }

};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends