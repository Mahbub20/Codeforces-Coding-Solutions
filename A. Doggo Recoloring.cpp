#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,flag = 0;
  char alpha[26],tmp;
  string s;
  cin >> n;
  if(n==1)flag = 2;
  cin >> s;
  for(int i = 0;i<n;i++)
  {
    tmp = s[i];
    for(int j = i+1;j<n;j++)
    {
      if(tmp==s[j])
      {
        flag = 1;
        break;
      }
    }
  }
  if(flag==1)cout << "Yes\n";
  else if(flag==2)cout << "Yes\n";
  else cout << "No\n";
  return 0;
}
