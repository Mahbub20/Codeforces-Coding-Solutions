#include<bits/stdc++.h>
using namespace std;
int main()
{

  long x,y,res1,res2;
  cin >> x >> y;
  res1 = y*log(x);
  res2 = x*log(y);
  if(res1>res2)cout << ">" << endl;
  else if(res1<res2) cout << "<" << endl;
  else if(res1==res2) cout << "=" << endl;
  return 0;
}
