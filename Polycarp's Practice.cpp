#include<bits/stdc++.h>
using namespace std;
int main()
{
  int ar[2100],i,j,n,k;
  cin >> n >> k;
  for(i = 0;i<n;i++)
  {
    cin >> ar[i];
  }
  sort(ar,ar+n,greater<int>());
  int sum = 0;
  for(i = 0;i<k;i++)
  {
    sum+=ar[i];
  }
  cout << sum << endl;
}
