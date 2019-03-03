#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,k,n,i;
  cin >> t;
  while(t--)
  {
     cin >> n >> k;
     for(i = 0;i<n;i++){
       printf("%c",'a'+(i%k));
     }
   printf("\n");
  }
  return 0;
}
