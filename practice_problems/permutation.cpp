# include <iostream>
# include<bits/stdc++.h>
# include<algorithm>
using namespace std;

int main()
{
    long long int num;
    cin>>num;
    if(num==1)
    {
        cout<<1<<endl;
    }
    if(num<4)
    {
        cout<<"NO SOLUTION"<<endl;
    }
    else
    {
        vector<int>vect(num,0);
        for(int i=0;i<num;i++)
        {
            vect[i]=i+1;
        }
        stable_partition(vect.begin(), vect.end(), [](int x) { return x%2 == 0;}); 
        for(int i=0;i<num;i++)
        {
            cout<<vect[i]<<" ";
        }
    }

    return 0;
}