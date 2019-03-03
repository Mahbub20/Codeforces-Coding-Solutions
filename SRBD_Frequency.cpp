#include<bits/stdc++.h>
using namespace std;
vector<string>vc;
bool ispalin(string s)
{
 int l,h,len;
  l = 0;
  h = s.size() - 1;
  while(h>l)
  {
    if(s[l++]!=s[h--])
    {
      return false;
    }
  }
  return true;

}
void substrr(string s,int n)
{
 int len;
  string str;
  for(int i = 0;i<n;i++)
  {
    for(len = 1;len<=n-i;len++)
    {
      str = s.substr(i,len);
      if(ispalin(str))
      vc.push_back(str);
    }
  }
}
int main()
{
  int t,n,q,k,len,cnt,i,j;
  string s;
  char c;
  cin >> t;
  while(t--)
  {
    cin >> n >> q;
    cin >> s;
    vc.clear();
    substrr(s,n);
    sort(vc.begin(),vc.end());
    /*for(i = 0;i<vc.size();i++)
    {
      cout << vc[i] << " ";
    }
    cout << endl;*/
    for( i = 0;i<q;i++)
    {
      cin >> k >> c;
      cnt = 0;
      //cout << vc[k-1].size();
      for( j = 0;j<vc[k-1].size();j++)
      {
        if(vc[k-1][j]==c)
        {
          cnt++;
        }
      }
      cout << cnt << endl;
    }

  }
}
