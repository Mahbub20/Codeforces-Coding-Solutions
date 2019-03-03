#include<bits/stdc++.h>
using namespace std;
int main()
{
  int dice[6] = {2,3,4,5,6,7};
  int i,t,x,tmp,res;
  cin >> t;
  while(t--)
  {
    cin >> x;
    tmp = x;
    res = 0;
    for(i = 0;i<6;i++)
    {
       if(tmp%dice[i]!=1)
       {
         res += tmp/dice[i];
         cout << "res: " << res << endl;
         tmp%=dice[i];
         cout << "tmp: " << tmp << endl;
         i = 0;
         if(tmp==0)break;
       }
    }
    cout << res << endl;
  }
}
