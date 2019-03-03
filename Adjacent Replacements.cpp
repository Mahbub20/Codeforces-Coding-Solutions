#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int ar[10010],i,j,n;
  cin >> n;
  for(i = 0;i<n;i++)
  {
    cin >> ar[i];
  }
  for(i = 0;i<n;i++)
  {
    if(ar[i]%2==0)
    {
      ar[i]-=1;
    }
    cout << ar[i] << " ";
  }
  cout << endl;
}
