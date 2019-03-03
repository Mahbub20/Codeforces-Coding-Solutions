#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n,i,j,k;
  cin >> n;
  char mat[n][n];
  for(i = 1;i<=n;i++)
  {
    for(j = 1;j<=n;j++)
    {
      cin>> mat[i][j];
    }
  }
  int cnt = 0;
  k= ceil(n/2);
  for(i = 1;i<=n;i++)
  {
    if(mat[k][k]=='X' && mat[k-1][k-1]=='X' && mat[k-1][k+1]=='X' && mat[k+1][k-1]=='X' && mat[k+1][k+1]=='X')cnt++;
  }

  cout << cnt << endl;
  return 0;

}
