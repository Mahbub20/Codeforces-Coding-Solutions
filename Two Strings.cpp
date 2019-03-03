#include<bits/stdc++.h>
using namespace std;
void issame(string s,string s1,int l1,int l2)
{
   vector<string>vec1;
   vector<string>vec2;
   for(int i = 0;i<l1;i++)
   {
     for(int len = 1;len<=l1-i;len++)
     {
       vec1.push_back(s.substr(i,len));
     }
   }

   for(int i = 0;i<l2;i++)
   {
     for(int len = 1;len<=l2-i;len++)
     {
       vec2.push_back(s1.substr(i,len));
     }
   }

   cout << vec1.size() << " " << vec2.size() << endl;
}
int main()
{
  string s,s1;
  int p,l1,l2;
  cin >> p;
  while(p--)
  {
    cin >> s >> s1;
    l1 = s.size();
    l2 = s1.size();
    issame(s,s1,l1,l2);
  }
}
