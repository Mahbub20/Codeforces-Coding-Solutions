#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t = 5,f = 0;
  string s,s1;
  cin >> s;
  while(t--)
  {
    cin >> s1;
    if(s[0]==s1[0] || s[0]==s1[1]|| s[1]==s1[0] || s[1]==s1[1])
    {
       f = 1;
       break;
    }
  }
  if(f==1)cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
