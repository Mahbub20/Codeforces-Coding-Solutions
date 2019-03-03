#include<bits/stdc++.h>
using namespace std;
int main()
{

   int n,m,seq[20],keys[20],f = 0,res[20];
   cin >> n >> m;
   for(int i = 0;i<n;i++)
   {
      cin >> seq[i];
   }
   for(int i = 0;i<m;i++)
   {
     cin >> keys[i];
   }
    int l = 0;
   for(int i = 0;i<n;i++)
   {
     for(int j = 0;j<m;j++)
     {
       if(seq[i]==keys[j]){
          f = 1;
          res[l++] = seq[i];

       }
     }
   }
   if(f==1)
   {
      for(int i = 0;i<l;i++)
      {
         cout << res[i] << " ";
      }
      cout << endl;
   }
  else{
     cout << "\n";
  }
}
