// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int A[], int N) {
        // code here
        int maxi = 0 ; 
        int i = 0 ; 
        int j = N-1;
        while(i<=j){
            if(A[i]<=A[j]){
                maxi = max(maxi , j-i);
                i++;
                j = N-1;
            }
            else
            j--;
        }
        return maxi;
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