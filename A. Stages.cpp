#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k,i,j,ind,sum[100],sum1;
  char alphabet[26],ch,tmp;
  string s;
  for(ch='a';ch<='z';ch++)
  {
    alphabet[ch-'a'] = ch;
  }
  cin >> n >> k;
  cin >> s;
  for(i = 0;i<n-1;i++)
  {
    for(j = i+1;j<n;j++)
    {
       if(s[i]>s[j])
       {
         swap(s[i],s[j]);
       }
    }
  }
  ind = 0;
  for(i = 0;i<n;i++)
  {
    tmp = s[i];
    for(j = 0;j<26;j++)
    {
      if(tmp==alphabet[j])
      {
        sum[ind++] = j+1;
      }
    }
  }

  int res = sum[0];
  sum1 = sum[0];
  for(i = 1;i<n;i++)
  {
    if(k==0)break;
    if(sum[i]-res>1)
    {
      sum1+=sum[i];
      res = sum[i];
      k--;
    }
  }
  if(sum1==sum[0] || k!=0)cout << -1 << endl;
  else
  cout << sum1 << endl;
}
