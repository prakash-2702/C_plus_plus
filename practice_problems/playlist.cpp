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
    lli arr[num];
    for(lli i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    string str="";
    lli counter=0;
    lli ans=0;
    for(lli i=0;i<num;i++)
    {
        if(str.find(to_string(arr[i]))!=string::npos)
        {   
            counter=str.length();
            str="";
            str+=to_string(arr[i]);
            ans=max(counter,ans);
        } 
        else
        {
            str=str+to_string(arr[i]);
        }
    }
    counter=str.length();
    ans=max(counter,ans);
    cout<<ans<<endl;
    return 0;
}