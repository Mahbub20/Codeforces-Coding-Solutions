#include<bits/stdc++.h>
using namespace std;
int main()
{
  int p,t,n,diff;\
  bool flag;
  string s;
  cin >> t;
  while(t--)
  {
    cin >> n >> s;
    int i = 0;
    int j = s.size()-1;
    flag = true;
    while(i<j)
    {
      diff = abs(s[i]-s[j]);
      if(diff==0 || diff==2)
      {
      }
      else{
        flag = false;
      }
      i++;
      j--;
    }
   if(flag)cout << "YES\n";
   else cout << "NO\n";
  }
  return 0;
}
