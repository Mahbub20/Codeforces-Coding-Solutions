#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0);
  int n,k,cnt,ans;
  cin >> n >> k;
  int ar[n+2];
  cnt = 1;
  for(int i = 0;i<n;i++)
  {
    cin >> ar[i];
  }

   ans = 0;
  for(int i = 0;i<n-1;i++)
  {
    if(ar[i]!=ar[i+1])
    {
       cnt++;
    }
    else{
      ans = max(cnt,ans);
      cnt = 1;
    }
  }
  cout << max(cnt,ans) << endl;
}
