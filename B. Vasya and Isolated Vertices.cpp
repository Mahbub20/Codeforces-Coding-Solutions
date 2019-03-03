#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,miin,maxx,y,k;
  cin >> n >> m;
  if(m*2>=n)miin = 0;
  else miin = n-(m*2);
  for(int i = 1;i<=n;i++)
  {
    k = i*(i-1)/2;
    if(m<=k)
    {
      y = i;
      break;
    }
  }
  maxx = n-y;
  cout << miin << " " << maxx << endl;
}
