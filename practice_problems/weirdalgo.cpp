#include <iostream> 
#include <bits/stdc++.h>
using namespace std; 
int main() 
{   
    long long int num;
    cin>>num;
    cout<<num<<" ";
    while(num!=1)
    {
        if(num%2==0)
        {
            num=num/2;
            cout<<num<<" ";
        }
        else
        {
            num=num*3+1;
            cout<<num<<" ";
        }
        
    }
    return 0; 
  
} 