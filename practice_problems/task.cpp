#include <iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, a, b;
	cin >> n;
	vector<pair<lli,lli>>arr(n);
	for (lli  i = 0; i < n; i++)
	{
		cin >> a >> b;
		arr[i]={a,b};
	}
	sort(arr.begin(), arr.end());
	lli total = 0, ans= 0;
	for (auto x : arr)
	{
		ans += x.first;
		total += x.second - ans;
	}
	cout << total;
	return 0;
}