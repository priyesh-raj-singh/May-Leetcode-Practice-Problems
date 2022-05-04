
#include <iostream>
using namespace std;

class Solution
{
   public:
  long long int count(long long int n) {
      long long int i,ans=0;
      for (i=1;i<=n;i=i*3){
          ans++;
      }
      return ans;
       
   }
};

int main() {
   int t;
   cin>>t;
   long long int n,ans;
   while (t--) {
       cin>>n;
       Solution ob;
       ans=ob.count(n);
       cout<<ans<<endl;
   }
   return 0;
}    