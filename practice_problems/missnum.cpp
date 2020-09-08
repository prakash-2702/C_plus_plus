# include <iostream>
# include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int num, sum= 0, digit;
    cin >> num;
    for (int i = 0; i < num- 1; i++)
    {
        cin >> digit;
        sum += digit;
    }
    cout << num * (num + 1) / 2 - sum;
    return 0;
}