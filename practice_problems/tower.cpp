#include<iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int num, ans;
	cin >> num;
	vector<int> arr;
	for (int i = 0; i < num; i++)
	{
		cin >> ans;
		auto it = upper_bound(arr.begin(), arr.end(), ans);
		if (it == arr.end())
		{
			arr.push_back(ans);
		}
		else
		{
			*it = ans;
		}
	}
	cout << arr.size()<<endl;
	return 0;
}