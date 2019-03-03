#include<bits/stdc++.h>
using namespace std;
int main()
{

  int n,x;
  set<int> s;
  cin >> n;
  for(int i = 0;i<n;i++)
  {
     cin >> x;
     if(x!=0){
       s.insert(x);
     }
  }
  cout << s.size() << endl;

}
