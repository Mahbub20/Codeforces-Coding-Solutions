#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s,t;
  stack<char>s1;
  stack<char>s2;
  cin >> s >> t;
  int len1,len2;
  len1 = s.size();
  len2 = t.size();
  for(int i = 0;i<len1;i++)
  {
    s1.push(s[i]);
  }
  for(int i = 0;i<len2;i++)
  {
    s2.push(t[i]);
  }
  for(int i = 0;i<len1+len2;i++)
  {
     if(s1.empty()|| s2.empty())
     {
       break;
     }
     if(s1.top()==s2.top())
     {
        s1.pop();
        s2.pop();
     }
  }
  cout << s1.size()+s2.size() << endl;
  return 0;
}
