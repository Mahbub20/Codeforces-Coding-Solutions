#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,ar[110],i,j,cnt;
  cin >> n;
  for(i = 0;i<n;i++)
  {
    cin >> ar[i];
  }
   cnt = 0;
  for(i = 0;i<n;i++)
  {
    if(i>0)
    {
      if(ar[i-1]==1 && ar[i+1]==1 && ar[i]==0)
      {
         cnt++;
         ar[i-1] = 0;
         ar[i+1] = 0;
      }
    }
  }

     cout << cnt << endl;

}
