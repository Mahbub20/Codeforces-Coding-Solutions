#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s,s_new = "";
  int sz,i,j,k;
  cin >> s;
  sz = s.size();
  if(sz%2==1)
  {
    j = sz/2;
  }
  else j = (sz/2)-1;
   k = 1;
  for(i = 0;i<sz;i++)
  {
    int tmp = i;
    if(tmp==0)s_new+=s[j];
    else if(tmp%2==1)
    {
      s_new+=s[j+k];
      k++;
    }
    else{
      s_new+=s[j-(tmp/2)];
    }
  }
  cout << s_new << endl;
  return 0;
}
