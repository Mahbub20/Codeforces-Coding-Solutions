#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long l1,r1,l2,r2,a,b;
  int q;
  cin >> q;
  while(q--)
  {
    cin >> l1 >> r1 >> l2 >> r2;
    if(l1==l2)
    {
      a = l1;
      b = l1+1;
    }
    else{
      a = l1+1;
      b = l2+1;
    }
    cout << a << " " << b << endl;
  }
  return 0;
}
