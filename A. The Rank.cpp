#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,ar[1010],tmp[1010],sc,sum,rem,ans;
  cin >> n;

  for(int i = 0;i<n;i++)
  {
    sum = 0;
   for(int j = 0;j<4;j++)
   {
     cin >> sc;
     sum+=sc;
   }
   //cout << sum << " ";
   tmp[i] = sum;
   if(i==0)
   {
     rem = tmp[0];
   }

  }
  //cout << rem << endl;
  sort(tmp,tmp+n,greater<int>());
  for(int i = 0;i<n;++i)
  {
    if(tmp[i]==rem)
    {
      ans = i+1;
      break;
    }
  }
  cout << ans <<  endl;
}
