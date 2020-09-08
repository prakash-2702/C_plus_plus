# include <iostream> 
# include <bits/stdc++.h>
using namespace std; 
int main() 
{   
    long long int num;
    cin>>num;
    int arr[num];
    for(long long int i=0;i<num;i++)
    {
        cin>>arr[i];
       
    }
    cout<<endl;
    sort(arr,arr+num);
    int count=0;
    for(long long int i=0;i<num-1;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            count++;
        }
    }
    cout<<count+1<<endl;
    
    return 0; 
  
} 