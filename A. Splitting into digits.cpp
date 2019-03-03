#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,i,j,k,l;
  cin >> n;
  for(i = 9;i>=1;i--)
  {
    if(n%i==0)
    {
      l = n/i;
      k = i;
      break;
    }
  }
  cout << l << endl;
  for(i = 0;i<l;i++)
  {
    cout << k << " ";
  }
  cout << endl;
}
