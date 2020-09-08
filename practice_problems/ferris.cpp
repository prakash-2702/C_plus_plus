#include <iostream> 
#include <bits/stdc++.h>
using namespace std; 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    
    int total = 0;
    int i = 0, j = n - 1, taken = 1;
    int curr = arr[j];
    while (i < j)
    {
        if (taken == 2)
        {
            total++;
            j--;
            curr = arr[j];
            taken = 1;
        }
        else if (curr + arr[i] > x)
        {
            total++;
            j--;
            curr = arr[j];
            taken = 1;
        }
        else
        {
            curr += arr[i];
            i++;
            taken++;
        }
    }
    cout << total + 1;
    return 0;
}