#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,s,a[1010],b[1010];
  cin >> n >> s;
  for(int i = 1;i<=n;i++)
  {
    cin >> a[i];
  }
  for(int i = n-1;i>=0;i--)
  {
    cin >> b[i];
  }
  if((a[1]==1 && a[s]==1) || (a[1]==1 && b[n-s]==1)){
      cout << "YES\n";

  }
  else{

     cout << "NO\n";
  }
  return 0;
}
