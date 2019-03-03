#include<bits/stdc++.h>
using namespace std;
int main()
{
   int w,h,u1,h1,u2,h2,i,wt,tmp;
   cin >> w >> h;
   cin >> u1 >> h1 >> u2 >> h2;
   tmp = h;
   while(tmp!=0)
   {
     w+=tmp;
     if(tmp==h1)
     {
       w-=u1;
     }
     else if(tmp==h2){
       w-=u2;
     }
     if(w<0){
      w = 0;
     }
     tmp--;
   }
  cout << w << endl;
  return 0;
}
