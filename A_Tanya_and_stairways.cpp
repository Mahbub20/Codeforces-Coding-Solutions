#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,ar[1010],i,j,res[1010];
   cin >> n;
   for(i = 0;i<n;i++)
   {
      cin >> ar[i];
   }
   int t = 0;

   for(i = 0;i<n;i++)
   {

     if(ar[i]==1)
     {
       res[t++] = i;
     }
   }
    cout << t << endl;
   for(i =0;i<t;i++)
   {
      if(i==(t-1))
      {
        cout << n-res[i];
        break;
      }
      int r = res[i+1]-res[i];
      cout << r << " ";

   }
   cout << endl;
   return 0;
}
