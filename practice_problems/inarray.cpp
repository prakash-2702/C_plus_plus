# include <iostream>
# include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int num;
    cin>>num;
    long long int arr[num];
    for(long long int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    long long int counter=0;
    for(long long int i=0;i<num-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            counter+=(arr[i]-arr[i+1]);
            swap(arr[i],arr[i+1]);
        }
    }
    cout<<counter<<endl;

    return 0;
}