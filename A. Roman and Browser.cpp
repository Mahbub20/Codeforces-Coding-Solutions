#include<bits/stdc++.h>
using namespace std;
int main()
{
  int ar[110],i,j,n,k,l,e,s,et,st;
  cin >> n >> k;
  for(i = 0;i<n;i++)
  {
    cin >> ar[i];
    if(ar[i]==1)e++;
    else s++;
  }
  int ans = -1;
  for(i = 0;i<k;i++)
  {
    et = e; st = s;
    for(j = i;j<n;j+=k)
    {
      if(ar[j]==1)et--;
      else st--;
    }
    ans = max(ans,abs(et-st));
  }
 cout << ans << endl;
 return 0;
}
