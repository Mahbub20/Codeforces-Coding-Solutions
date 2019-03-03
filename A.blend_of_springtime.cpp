#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   int f = 0;
   cin >> s;
   for(int i = 0;i<s.size();i++){

   if((s[i]=='A'||s[i]=='B'||s[i]=='C')&&(s[i+1]=='A'||s[i+1]=='B'||s[i+1]=='C')&&(s[i+2]=='A'||s[i+2]=='B'||s[i+2]=='C')){

       f = 1;
       break;

   }

   }
   if(f==1)cout << "Yes\n";
   else cout << "No\n";

   return 0;

}
