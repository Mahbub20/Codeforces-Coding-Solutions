#include<bits/stdc++.h>
using namespace std;
int main()
{
   int ar[500],i,j,N,W,w,n,cnt = 0,k;
   cin >> N >> W;
   int sum = 0;
   for(i = 0;i<N;i++)
   {
     cin >> n >> w;
       if(n==0)
       {
         sum = 0;
         continue;
       }
         sum+=w;
         if(sum>=W)
         {
            k = 1;
            break;
         }
         ar[k++] = w;

   }
   if(k==1)
   {
     for()
   }

}
