# include <iostream> 
# include <bits/stdc++.h>
using namespace std; 
bool check(string str,long long int start,long long int end)
{
    if (start == end)
    { 
        return true;
    } 
  
    // If first and last 
    // characters do not match 
    if (str[start] != str[end])
    { 
        return false; 
    }
  
    
    if (start < end + 1) 
    {
    return check(str, start+1, end-1); 
    }
    return true; 

} 
int main() 
{   
    string str;
    cin>>str;
    long long int len2=str.length();
    sort(str.begin(),str.end());
    vector<string>ans;
    
    do
    {
        ans.push_back(str);

    } while (next_permutation (str.begin(),str.end()));
    long long int len=ans.size();
    string my="";
    for(long long int i=0;i<len;i++)
    {
        if(check(ans[i],0,len2-1))
        {
            my=ans[i];
            break;
        }
    }
    if(my=="")
    {
        cout<<"NO SOLUTION"<<endl;
    }
    else
    {
        cout<<my<<endl;
    }
    

    return 0;
  
} 