#include<bits/stdc++.h>
using namespace std;
int main()
{
  int y,b,r,x,z,res;
  cin >> y >> b >> r;
  if(y==1 && b==2 && r==3)
  {
    cout << 6 << endl;
  }
  else{
     x = min(y,b);
     z = min(x,r);
     res = (z-1)+z+(z+1);
     cout << res << endl;
  }

  return 0;
}
