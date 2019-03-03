#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,i,j;
  cin >> n;
  int ar[n],ar1[n],ar2[n];
  for(i = 0;i<n;i++)
  {
    cin >> ar[i];
  }
  sort(ar,ar+n);
  for(i = n-2;i>=0;i--)
  {
    if(ar[n-1]%ar[i]!=0 || ar[i]==ar[i+1])break;
  }
  cout << ar[i] << " " << ar[n-1] << endl;
  return 0;
}
