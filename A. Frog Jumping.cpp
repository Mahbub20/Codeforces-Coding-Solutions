#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int t,a,b,k,c,d,ans,res1,res2;
   cin >> t;
   while(t--)
   {
      cin >> a >> b >> k;
      if(k%2==1)
      {
        c = (k/2)+1;
      }
      else{
         c = k/2;
       }
      d = k - c;
      res1= a*c;
      res2= b*d;
      ans = res1 - res2;
      cout << ans << endl;
   }
   return 0;

}
