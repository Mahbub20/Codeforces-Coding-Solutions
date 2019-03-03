#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
pair<int,int>a[10000];
int main()
{
	int n,k;
	cin >> n >> k;
	for(int i = 1; i <= n; ++ i)
	{
		cin >> a[i].first;
		a[i].second = i;
	}
	sort(a+1,a+n+1);
	int ans=0;
	for(int i = n; i > n-k; -- i)
		ans+=a[i].first;
	cout << ans << '\n';
	if(k==1)
	{
		cout << n;
		return 0;
	}
	vector<int>v;
	for(int i = n-k+1; i <= n; ++ i)
		v.push_back(a[i].second);
	sort(v.begin(),v.end());
	cout << v[0] << ' ';
	for(int i = 1; i < v.size()-1; ++ i)
		cout << v[i]-v[i-1] << ' ';
	if(v.size()>1)
		cout << n-v[v.size()-2];
}
