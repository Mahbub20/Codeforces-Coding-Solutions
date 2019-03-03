#include<bits/stdc++.h>
using namespace std;
int main(){

 int n,p,cnt = 0;
 string s;
 cin >> n >> p;
 cin >> s;
 for(int i = 0;i<s.size();i++)
 {
    if(s[i]==s[p]){
      cnt++;
    }

 }
 if(cnt==n)

}
