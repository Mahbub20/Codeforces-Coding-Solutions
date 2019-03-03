#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   char ch;
   int l,n,tmp,f;
   char cons[150];
   char vowel[5] = {'a','e','i','o','u'};
   cin >> s;
   n = s.size();
   l = 0;
   for(int i = 0;i<n;i++)
   {
      ch = s[i];
      if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u')
          cons[l++] = i;

   }
   for(int i = 0;i<l;i++)
   {
     tmp = cons[i];
     f = 0;
     for(int j = 0;j<n;j++)
     {
        if(s[n-1]=='n')f = 1;
       for(int i = 0;i<5;i++)
       {
         if(s[tmp+1]==vowel[i])
         {
           f = 1;

         }
         else f = 0;
       }

     }
   }
   if(f==1)cout << "YES" << endl;
   else cout << "NO" << endl;
}
