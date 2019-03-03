#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k;
  string s,tmp;
  cin >> n >> k;
  cin >> s;
  tmp = s;
  if(n==1)
  {
    for(int i = 0;i<k-1;i++)
    {
      s+=tmp;
    }
  }
  for(int i = 0;i<k-1;i++)
  {
    if(s[s.size()-1]==tmp[0])
    {
      for(int j = 1;j<n;j++)
      {
        s+=tmp[j];
      }
    }
    else
    s+=tmp;
    //cout << s << endl;
  }
  cout << s << endl;
}
