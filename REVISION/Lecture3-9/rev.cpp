#include<iostream>
using namespace std;
void reverseArray(int *arr,int n){
    int s = 0 ;
    int e = n-1;
    while(s<=e){
        //swapping 
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
int main(){
    //reverse an array
    int arr[5] = {1,2,3,4,5};
    reverseArray(arr,5);
    //printing array
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}