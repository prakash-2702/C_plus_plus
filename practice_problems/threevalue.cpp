#include<iostream> 
#include<bits/stdc++.h>
using namespace std; 
  
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x;
	cin >> n >> x;
	vector<pair<int, int>> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].first;
		arr[i].second = i + 1;
	}
	sort(arr.begin(), arr.end());
    int len=arr.size();
    for(int i=0;i<len-2;i++)
    {
	int j = i+1, k = n - 1;
	while (j < k)
	{
		if (arr[i].first + arr[j].first + arr[k].first== x)
		{
			cout << arr[i].second << " " << arr[j].second<<" "<<arr[k].second;
			return 0;
		}
		if (arr[i].first + arr[j].first + arr[k].first< x)
		{
			j++;
		}
		else
		{
			k--;
		}
	}
    }
	cout << "IMPOSSIBLE";
	return 0;
}