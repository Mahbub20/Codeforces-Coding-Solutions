#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,i,ar[110],sum = 0;
  cin >> n;
  for(i = 0;i<n;i++)
  {
    cin >> ar[i];
  }
  sort(ar,ar+n);
  for(i = 1;i<n;i+=2)
  {
    sum+=ar[i]-ar[i-1];
  }
  cout << sum << endl;
  return 0;
}
