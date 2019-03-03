#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<char>vc[1010];
  char c;
  string s;
  long int n,p,cursor;
  cin >> n >> s;
  cursor = s.size();
  for(int i = 0;i<s.size();i++)
  {
    vc.push_back(s[i]);
  }
  cout << endl;
  cin >> p >> c;
  if(p==1)vc.push_back(c);
  for(int i = 0;i<vc.size();i++)
  {
    cout << vc[i] << "";
  }
}
