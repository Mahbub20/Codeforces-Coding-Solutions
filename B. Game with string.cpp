#include<bits/stdc++.h>
using namespace std;
int main()
{
  stack<char>st;
  string s;
  cin >> s;
  int cnt = 0;
  for(int i = 0;i<s.size();i++)
  {
    if(!st.empty() && st.top()==s[i])
    {
      cnt++;
      st.pop();
    }
    else{
      st.push(s[i]);
    }
  }
  if(cnt & 1)cout << "Yes\n";
  else cout << "No\n";
  return 0;
}
