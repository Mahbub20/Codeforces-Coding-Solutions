#include<bits/stdc++.h>
using namespace std;
int main(void)
{
  long long int n,c0=0,c1=0,c00=0,c10=0,ans;
  string a,b;
  cin>>n;
  cin>>a>>b;
  for(int i=0;i<n;i++)
  {
    if(a[i]=='0')
     c0++;
    else
     c1++;
    if(a[i]=='0' && b[i]=='0')
     c00++;
    else if(a[i]=='1' && b[i]=='0')
     c10++;
  }
  ans=c00*c1;
  c0=c0-c00;
  ans=ans+(c10*c0);
  cout<<ans;
  return 0;
}
