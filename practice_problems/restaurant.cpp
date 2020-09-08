#include<iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	lli n, x, y, max_people = 0, curr_people = 0;
	vector<pair<lli, bool>> arr;
	cin >> n;
	while (n--)
	{
		cin >> x >> y;
		arr.push_back(make_pair(x, true));
		arr.push_back(make_pair(y, false));
	}
	sort(arr.begin(), arr.end());
    lli len=arr.size();
	for (int i = 0; i < len; i++)
	{
		if(arr[i].second)
        {
            curr_people+=1;
        }
        else
        {
             curr_people-=1;
        }
        
		max_people = max(max_people, curr_people);
	}
	cout << max_people;
	return 0;
}