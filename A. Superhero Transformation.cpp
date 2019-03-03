#include<bits/stdc++.h>
using namespace std;
int func(char c)
{
  if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')return 1;
  else return 0;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  string s1,s2;
  bool istrue = true;
  cin >> s1 >> s2;
  if(s1.size()==s2.size()){
    for(int i = 0;i<s1.size();i++)
    {
      if(func(s1[i])!=func(s2[i]))
      {
        istrue = false;
        break;
      }
    }
    if(istrue)cout << "Yes\n";
    else{
      cout << "No\n";
    }
  }
  else
  cout << "No\n";
  return 0;
}
