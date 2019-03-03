#include<bits/stdc++.h>
#define pi 3.1415926
using namespace std;
int main()
{
  int n,r;
  cin >> n >> r;
  double x,res;
  x = sin(pi/n);
  res = (x*r)/(1-x);
  cout << fixed << showpoint << setprecision(7);
  cout << res << endl;
}
