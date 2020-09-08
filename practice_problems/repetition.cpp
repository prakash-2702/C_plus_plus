# include <iostream>
# include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.length(), prev= 0, counter = 1;
    for (int i = 1; i < len; i++)
    {
        if (s[i] != s[i - 1])
        {
            prev = max(prev, counter);
            counter = 0;
        }
        counter++;
    }
    prev = max(prev, counter);
    cout << prev;
    return 0;
}