#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  long long res,res3,s,a,b,c,res1,res2;
  cin >> t;
  while(t--)
  {
    cin >> s >> a >> b >> c;
    res1 = s/c;
    res2 = res1/a;
    res3 = res2*b;
    res = res1+res3;
    cout << res << endl;
  }
  return 0;
}
