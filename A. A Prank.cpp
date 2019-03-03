#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,i,j,ar[1010],f,cnt;
  cin >> n;
  for(i = 0;i<n;i++)
  {
     cin >> ar[i];
  }
  cnt = 0;
  for(i = 0;i<n-1;i++)
  {

   if((ar[i+1]-ar[i])==1){

        cnt++;
     }

  }
  cnt = cnt+1;
  if(cnt==n)
  {
    cout << n-1 << endl;
  }
  else{
    cout << n-cnt << endl;
  }
  return 0;
}
