#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);

  int ar[105] = {0};

  int j,n,q,k,tmp;

  cin >> n;
  tmp = n;
  while(n--)
  {
    cin >> q;
    while(q--)
    {
      cin >> k;
      ar[k]++;
    }
  }

  for(j = 1;j<=100;j++)
  {
    if(ar[j]==tmp)cout << j << " ";
  }
  cout << endl;
}
