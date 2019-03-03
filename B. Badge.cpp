#include<bits/stdc++.h>
using namespace std;
#define mx 1010
int main()
{
  int ar[mx],vis[mx],n,t;
  memset(ar,0,sizeof(ar));
  cin >> n;
  for(int i = 1;i<=n;i++)
  {
    cin >> ar[i];
  }
  for(int i = 1;i<=n;i++)
  {
    memset(vis,0,sizeof(vis));
    t = i;
    while(1)
    {
      if(vis[t]==1)break;
      vis[t] = 1;
      t = ar[t];
    }
    cout << t << " ";
  }
  cout << endl;
  return 0;
}
