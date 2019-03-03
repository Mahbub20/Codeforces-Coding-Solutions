#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
stack<int>st;
int a[n];
int b[n];
map<int,int>mp;

for(int i = 0;i<n;i++)
{
  cin >> a[i];
  mp[a[i]] = 1;
}
for(int i = n-1;i>=0;i--)
{
  st.push(a[i]);
}
for(int i = 0;i<n;i++)
{
  cin >> b[i];
}

for(int i = 0;i<n;i++)
{
  int cnt = 0;
  if(mp[b[i]]==1){
    while(st.top()!=b[i]){
    cnt++;
    mp[st.top()] = 0;
    st.pop();

  }
  if(st.top()==b[i]){
    cnt++;
    mp[b[i]] = 0;
    st.pop();

  }
   cout << cnt << " ";

}

else{
  cout << cnt << " ";

}

}

}
