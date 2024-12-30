#include<iostream>
#include<math.h>
using namespace std;
int getMax(int arr[], int size){
    int max = -100000;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int getMin(int arr[], int size){
    int min = 1000000;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
int main(){

    int size;
    cin>>size;

    int arr[10000];
    cout<<"Enter the array elements: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"maximum value: "<<getMax(arr,size)<<endl;
    cout<<"minimum value: "<<getMin(arr,size)<<endl;
    
}