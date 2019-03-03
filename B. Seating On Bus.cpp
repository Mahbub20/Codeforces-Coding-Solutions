#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,tmp,tmp1,j,k,i;
  cin >> n >> m;
  for(i = 1;i<=2*n;i++)
  {
    if(2*n+i<=m)
    {
      cout << 2*n+i << " ";
    }
    if(i<=m)cout << i << " ";
  }
  cout << endl;
  return 0;
}
