#include<iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli n, m, curr, ticket;
    cin >> n >> m;
    multiset<lli, greater<int>> tickets;

    while (n--)
    {
        cin >> ticket;
        tickets.insert(ticket);
    }

    while (m--)
    {
        cin >> curr;
        auto it = tickets.lower_bound(curr);
        if (it == tickets.end())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << *it << endl;
            tickets.erase(it);
        }
    }
    return 0;
}