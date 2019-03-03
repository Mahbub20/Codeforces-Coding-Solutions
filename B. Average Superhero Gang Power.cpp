#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  double n,k,m,i,cnt;
  vector<double>vec;
  cin >> n >> k >> m;
  for(i = 0;i<n;i++)
  {
    cin >> vec[i];
  }
  sort(vec.rbegin(),vec.rend());
  cnt = 0;
  if(binary_search(vec.begin(),vec.end(),vec[0]))
  {
    cnt++;
  }
  cout << cnt << endl;
}
