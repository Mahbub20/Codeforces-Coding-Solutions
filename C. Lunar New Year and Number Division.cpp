#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  long long int n,i,s,r,sum = 0;
  cin >> n;
  long long int ar[n];
  for(i = 0;i<n;i++)
  {
    cin >> ar[i];
  }
  sort(ar,ar+n);
  for(i = 0;i<n/2;i++)
  {
    s = ar[i]+ar[n-1-i];
    r = pow(s,2);
    sum+=r;
  }

  cout << sum << endl;
  return 0;
}
