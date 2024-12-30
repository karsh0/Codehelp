
#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;
int main(){
    vector<int>arr = {1,0,1,1,0};
    int size = arr.size();

    int i=0, j=size-1;
    while(i<j){
        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        i++;
        j--;
    }
   
    cout<<"printing ans: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}