
#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;
int main(){
    vector<int>arr = {0,2,2,1,0,1,1,0,2};
    int size = arr.size();

    int i=0, j=i+1, k=j+1;
    while(i<size){
       if(arr[i] > arr[j]){
        swap(arr[i], arr[j]);
        i++;
       }
       if(arr[j] > arr[k]){
        swap(arr[j], arr[k]);
       }
       i++;
       j=i+1;
       k=j+1;
    }
   
    cout<<"printing ans: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}