#include<iostream> 
#include<bits/stdc++.h>
using namespace std; 
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<long long int > arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long int current= arr[0], sum = arr[0];
    for (int i = 1; i < n; i++)
    {
        current = max(current + arr[i], arr[i]);
        sum= max(sum, current);
    }
    cout << sum;
    return 0;
}