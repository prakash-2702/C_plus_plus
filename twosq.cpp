#include <iostream> 
#include <algorithm> 
#include<bits/stdc++.h>
using namespace std; 
  
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int num;
        cin>>num;
        bool solution=false;
        for(int i=0;i<sqrt(num);i++)
        {
            int temp=sqrt(num-i*i);
            int a= num-(i*i);
            if (temp*temp == a)
            {
                solution=true;
                break;
            }
        }
        if(solution==true)
            {
                cout<<"yes"<<endl;
            }
        else
        {
            cout<<"no"<<endl;
        }

    }

    return 0; 

  
} 
