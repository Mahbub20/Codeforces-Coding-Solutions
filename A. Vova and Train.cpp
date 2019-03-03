#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
  long long int t,L,v,l,r,cnt,rem,rem1,i,res;
  cin >> t;
  while(t--)
  {
    cin >> L >> v >> l >> r;
    res = L/v;
    rem = l/v;
    rem1 = r/v;
    if(l%v==0)rem--;
    cout << res-(rem1-rem) << endl;
  }
  return 0;
}
