#include<bits/stdc++.h>
using namespace std;
int main()
{

   int n,k,ar[110],res[110],i,j,c = 0,ind,l = 0;
   bool isdistinct = false;
   cin >> n >> k;
   for(i = 0;i<n;i++)
   {
      cin >> ar[i];
   }

   for(i = 0;i<n;i++)
   {
      for(j = 0;j<i;j++)
      {
         if(ar[i]==ar[j]){

           isdistinct = true;
           //break;
         }

      }

      if(isdistinct==false){
         //cout << "ok";
         //cout << i << endl;
         res[l++] = i;
         c++;
         if(c==k)break;
      }
      isdistinct = false;
   }
   //cout << l << c << endl;
   if(c==k){
     cout << "YES\n";
     for(i = 0;i<l;i++){
        cout << res[i]+1 << " ";
     }
     cout << endl;
   }
   else cout << "NO\n";
   return 0;

}
