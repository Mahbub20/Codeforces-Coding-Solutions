#include<bits/stdc++.h>
using namespace std;
bool ispowerofTwo(long long n)
{
   if(ceil(log2(n))==floor(log2(n))){
     return true;
   }
   return false;

}
int main()
{
  long long seq[150010],n,sum,tmp;
  int cnt;
  cin >> n;
  for(int i = 0;i<n;i++)
  {
    cin >> seq[i];
  }
 cnt = 0;
 for(int i = 0;i<n;i++)
 {
   tmp = seq[i];
   for(int j = 0;j<n;j++)
   {
     if(i!=j)
     {
       sum = tmp+seq[j];
       if(!ispowerofTwo(sum)){
         cout << "ok\n";
       }
     }
   }
 }
 cout << cnt << endl;

}
