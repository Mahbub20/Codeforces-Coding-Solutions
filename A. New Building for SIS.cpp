#include<bits/stdc++.h>
using namespace std;
int main()
{
   long n,h,a,b,k,ta,fa,tb,fb,ans,res,r1,res1,res2,rem1,rem2;
   cin >> n >> h >> a >> b >> k;
   while(k--)
   {
     cin >> ta >> fa >> tb >> fb;
     if(ta==tb){
       ans = abs(fb - fa);
     }

     else{
       res = abs(ta-tb);
       if(fa>b){
         r1 = max(a,b);
         res1 = fa-r1;
         res2 = abs(fb-r1);
         ans = res+res1+res2;
       }
       else if(fa<a)
       {
         r1 = min(a,b);
         res1 = r1-fa;
         res2 = abs(fb-r1);
         ans = res+res1+res2;
       }
       else
       {
         /*rem1 = abs(fa-a);
         rem2 = abs(fa-b);
         if(rem1<rem2)
         {
           r1 = a;
         }*/
         r1 = fa;
         res1 = abs(fa-r1);
         res2 = abs(fb-r1);
         ans = res+res1+res2;
       }
   }
   cout << ans << endl;
}
}
