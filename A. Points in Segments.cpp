#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,l,r,i,ar[200];
  cin >> n >> m;
  for(i = 1;i<=m;i++)
  {
    ar[i] = i;
  }
  int cnt = 0;
  while(n--)
  {
    cin >> l >> r;
    for(i = 1;i<=m;i++)
    {
      if(i>=l && i<=r)
      {
        ar[i] = -1;
      }
    }
  }
  for(i = 1;i<=m;i++)
  {
    if(ar[i]!=-1)cnt++;
  }
  cout << cnt << endl;
  for(i = 1;i<=m;i++)
  {
    if(ar[i]!=-1)cout << ar[i] << " ";
  }
  cout << endl;
}
