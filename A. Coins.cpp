#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,s,res;
  cin >> n >> s;
  if(s%n==0){

    res = s/n;
  }
  else{
     res = (s/n)+1;
  }
  cout << res << endl;
  return 0;
}
