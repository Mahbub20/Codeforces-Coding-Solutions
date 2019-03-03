#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long a,b,i,j;
  cin >> a >> b;
  i = 1;
  while(1)
  {
    if(i%2==1)
    {
      a-=i;
    }
    else{
       b-=i;
    }
    i++;
    if(a<0 || b<0)break;
  }
  if(a<0)cout << "Vladik\n";
  else cout << "Valera\n";
}
