#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x, y, curr= 0, total = 0;
	vector<pair<int, int>> arr;
	cin >> n;
	while (n--)
	{
		cin >> x >> y;
		arr.push_back(make_pair(y, x));
	}
	// sorting by ending times
	sort(arr.begin(), arr.end());
	for (auto x : arr)
	{
		if (x.second >= curr)
		{
			curr= x.first;
			total++;
		}
	}
	cout << total;
    return 0;
}