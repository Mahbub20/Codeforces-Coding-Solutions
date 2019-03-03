#include<bits/stdc++.h>
using namespace std;
#define M 1000000
bool great(pair<int,int>p1,pair<int,int>p2)
{
  return p1.first > p2.first;
}
int main()
{
 pair<int,int> p[M];
 int ar[2100],n,k,sum;
 cin >> n >> k;
 for(int i = 0;i<n;i++)
 {
   cin >> p[i].first;
   p[i].second = i+1;
 }
 sort(p,p+n,great);
 vector<int>v;
 v.push_back(0);
  sum = 0;
 for(int i = 0;i<k;i++)
 {
   sum+=p[i].first;
   v.push_back(p[i].second);
 }
 cout << sum << endl;
 sort(v.begin(),v.end());
 for(int i = 0;i<v.size()-2;i++)
 {
   cout << v[i+1]-v[i] << " ";
 }
 cout << n-v[v.size()-2] << endl;
}
