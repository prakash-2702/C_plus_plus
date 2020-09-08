#include <iostream> 
#include <stack> 
using namespace std; 
  
void printPrevSmaller(long long int arr[], long long int n) 
{ 
    stack<int> S; 
   
    for (long long int i=0; i<n; i++) 
    { 
        long long int j=i;
        while (!S.empty() && S.top() >= arr[i])
        { 
            S.pop();
            j--;
        } 
  
        if (S.empty())
        { 
            cout << 0 <<" "; 
        }
        else 
        { 
            cout << j << " "; 
        }

        S.push(arr[i]); 
    } 
} 
  
int main() 
{ 
    long long int num;
    cin>>num;
    long long int arr[num];
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    printPrevSmaller(arr, num); 
    return 0; 
} 