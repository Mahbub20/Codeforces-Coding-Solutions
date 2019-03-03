#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  int x,a,b;
  while(cin >> x){
  if(x<4)
  {
    cout << -1 << endl;
  }
  else{
     if(x%2==0)
     {
       a = x;
       b = a/2;
     }
     else{
       a = x-1;
       b = a/2;
     }

    cout << a << " " << b << endl;
  }
  }
  return 0;
}
