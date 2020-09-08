#include <iostream> 
#include <bits/stdc++.h>
using namespace std; 
int main() 
{   
    long long int num;
    cin>>num;
    if(num*(num+1)%4!=0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        long long int total=num*(num+1)/4;
        vector<long long int>a;
        vector<long long int>b;
        while(num)
        {
            if(total-num>=0)
            {
                a.push_back(num);
                total=total-num;
            }
            else
            {
                b.push_back(num);
            }
            num--;
        }
        cout << "YES" << endl;
        cout << a.size() << endl;
        for (auto c : a)
            cout << c << " ";
        cout << endl;
        cout << b.size() << endl;
        for (auto d : b)
            cout << d << " ";
    }
    
    
    return 0; 
  
} 