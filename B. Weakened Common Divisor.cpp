#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b)
{
  if(a==0)return b;
  return gcd(b%a,a);
}
int main()
{
 long long t,a[150010],b[150010],ans,i;
 cin >> t;
 ans = 0;
 for(i = 0;i<t;i++)
 {
   cin >> a[i] >> b[i];
   ans = gcd(ans,a[i]*b[i]);
   if(ans==1)
   {
     cout << "-1\n" << endl;
     return 0;
   }
 }
 for(i = 0;i<t;i++)
 {
   if(gcd(ans,a[i])!=1)
    ans = gcd(ans,a[i]);
    else
    ans = gcd(ans,b[i]);
 }
 if(ans==1)cout << "-1\n" << endl;
 else cout << ans << endl;
 return 0;
}
