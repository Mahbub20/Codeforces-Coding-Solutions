#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,i,j,sum1 = 0,ar[110],mx = -1,sum,ind;
  cin >> n;
  for(i = 0;i<n;i++)
  {
    cin >> ar[i];
    sum1+=ar[i];
    mx = max(mx,ar[i]);
  }
  for(i = mx;;i++)
  {
     sum = 0;
    for(j = 0;j<n;j++)
    {
      sum+=(i-ar[j]);
    }
    if(sum>sum1){
       ind = i;
       break;
    }
  }
  cout << ind << endl;
}

