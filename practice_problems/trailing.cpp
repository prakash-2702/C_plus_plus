# include <iostream>
# include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int num;
    cin>>num;
    
    long long int ans=0;
    long long int base=5;
    while(base<=num)
        {
            ans=ans+num/base;
            base=base*5;
        }
    cout<<ans<<endl;

    return 0;
}