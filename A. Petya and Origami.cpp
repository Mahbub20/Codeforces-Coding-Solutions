#include<bits/stdc++.h>
using namespace std;
long long int red(long long int r,long long k)
{
   long long int rs;
   if(r%k!=0)
   {
     rs = (r/k)+1;
   }
  else{
     rs = (r/k);
  }

  return rs;
}
long long int green(long long int g,long long k)
{
   long long int rs;
   if(g%k!=0)
   {
     rs = (g/k)+1;
   }
  else{
     rs = (g/k);
  }

  return rs;
}
long long int blue(long long int b,long long k)
{
   long long int rs;
  if(b%k!=0)
   {
     rs = (b/k)+1;
   }
  else{
     rs = (b/k);
  }

  return rs;
}
int main()
{
  long long int n,k,sum,r,g,b;
  cin >> n >> k;
  r = n*2;
  g = n*5;
  b = n*8;
  sum = red(r,k)+green(g,k)+blue(b,k);
  cout << sum << endl;

}
