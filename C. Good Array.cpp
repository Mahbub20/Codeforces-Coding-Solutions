#include<bits/stdc++.h>
using namespace std;
int main()
{
  map<int,int>mp;
  int t;
  for(int i = 0;i<5;i++)
  {
    cin >> t;
    mp[t]++;
  }
  for(int i = 0;i<5;i++)
  {
    cout << mp[i] << " ";
  }
  cout << endl;
}
