
 #include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,ar[26] = {0};
  string s;
  cin >> n >> s;
  for(int i = 0;i<n;i++)
  {
    ar[s[i]-'a']++;
  }
  for(int i = 0;i<n;i++)
  {
    cout << ar[i] << " ";
  }
}
