#include <iostream> 
#include <bits/stdc++.h>
using namespace std; 
int main() 
{   
    string str;
    cin>>str;
    sort(str.begin(),str.end());
    vector<string>ans;
    
    do
    {
        ans.push_back(str);

    } while (next_permutation (str.begin(),str.end()));
    long int len=ans.size();
    cout<<len<<endl;
    for(long int i=0;i<len;i++)
    {
        cout<<ans[i]<<endl;
    }

    return 0;
    
  
} 