#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main (){
   
    vector<int> data={ -16, -2, -1, 1, 5, 6, 8};
    // Lets say now if initial array is sorted !
   
    int n = data.size();
    int positiveIndexStart = -1;
   
    for(int i=0;i<n;i++){
        if(data[i]>=0){
            positiveIndexStart = i;
            break;
        }
    }//​O(N)
   
    vector<int> positiveSq;
    vector<int> negetiveSq;
   
    // -16 -2 -1 -> 1, 4, 256
    for(int i=positiveIndexStart-1;i>=0;i--){
        negetiveSq.push_back(data[i]*data[i]);
        //​O(N)
    }
   
    // 1, 5, 6, 8 ->  25 36 64
    for(int i=positiveIndexStart;i<n;i++){
        positiveSq.push_back(data[i]*data[i]);
        //​O(N)
    }
   
    vector<int> result;
    int i=0;//negetiveSq
    int j=0;//positiveSq
 
    int negetiveSize = negetiveSq.size();
    int positiveSize = positiveSq.size();
   
    while(i< negetiveSize && j<positiveSize ){
        if(negetiveSq[i] <= positiveSq[j]){
            result.push_back(negetiveSq[i]);
            i++;
        }else{
            result.push_back(positiveSq[j]);
            j++;
        }  
    }
   
    while(i< negetiveSize){
        result.push_back(negetiveSq[i]);
        i++;
    }
   
    while(j< positiveSize){
        result.push_back(positiveSq[j]);
        j++;
    }
   
    for(int i=0;i<n;i++){
        cout<<result[i]<<endl;
    }
   
   
    return 0;
}