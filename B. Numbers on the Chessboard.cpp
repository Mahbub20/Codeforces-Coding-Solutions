#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long n,q,x,y,sum,res;
 cin >> n >> q;
 while(q--)
 {
   cin >> x >> y;
   sum = x+y;
   if(sum%2==0)
   {
     res = ((x-1)*n + (y+1))/2;
   }
   else{
     res = (n*n)/2 + n%2 + ((x-1)*n + (y+1))/2;
   }
   cout << res << endl;
 }
 return 0;
}
