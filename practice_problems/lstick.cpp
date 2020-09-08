#include<iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli num;
    cin>>num;
    vector<lli>vect(num);
    for(lli i=0;i<num;i++)
    {
        cin>>vect[i];
    }
    sort(vect.begin(),vect.end());
    lli mid=vect[num/2];
    lli ans=0;
    for(lli i=0;i<num;i++)
    {
        ans+=abs(vect[i]-mid);
    }
    cout<<ans<<endl;
    return 0;
}