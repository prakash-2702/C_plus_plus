#include<iostream>
#include <bits/stdc++.h>
#define lli long long int
using namespace std;
lli func(lli pos,vector<lli> &vect,lli size)
{
    vect[pos]=1;
    lli a=0;
    lli b=0;
    for(lli i=0;i<size;i++)
    {
        if(vect[i]==1)
        {
            a=max(a,b);
            b=0;
        }
        else
        {
            b++;
        }
    }
    return max(a,b);

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli num,t;
    cin>>num>>t;
    vector<lli>vect(num+1,0);
    for(lli i=0;i<t;i++)
    {
        lli pos;
        cin>>pos;
        lli  zero=func(pos,vect,num+1);
        cout<<"answer="<<zero<<" ";
    }
    return 0; 
    
}