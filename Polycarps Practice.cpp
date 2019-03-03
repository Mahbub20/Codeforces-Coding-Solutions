#include<bits/stdc++.h>
using namespace std;
int main()
{
  int ar[2100],i,j,n,k,res,rem,tmp,sz,l,maxx,sum,sizee,ind,div[2100];
  cin >> n >> k;
  for(i = 0;i<n;i++)
  {
    cin >> ar[i];
  }
  /*sort(ar,ar+n,greater<int>());
  int sum = 0;
  for(i = 0;i<k;i++)
  {
    sum+=ar[i];
  }
  cout << sum << endl;*/
  i = k;
  tmp = n;
  j = 0;
  sum = 0;
  sizee = 0;
  ind = 0;
  while(tmp!=0)
  {
    sz = tmp/i;
    div[ind++] = sz;
    sizee+=sz;
    //int mx[sz];

      maxx = ar[j];
    for(l = j;l<sizee;l++)
    {
      maxx = max(maxx,ar[l]);
    }
    j = l;
    sum+=maxx;
    //cout << div << " ";
    tmp-=sz;
    i--;
  }
  cout << sum << endl;
  for(i = 0;i<ind;i++)
  {
    cout << div[i] << " ";
  }
  cout << endl;

}
