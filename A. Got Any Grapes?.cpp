#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  long long int x,y,z,a,b,c,p,q,r,x1,y1,f = 0;
  cin >> x >> y >> z;
  cin >> a >> b >> c;
  if(x<=a)
  {
    p = x;
    x1 = a-x;

 if(y<=(x1+b))
  {
    q = y;
    y1 = (x1+b)-y;
  }
  else f = 1;
  if(z<=(y1+c))
  {
    r = z;
  }
  else f = 1;
  }
  else f = 1;

  if(f!=1)cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
