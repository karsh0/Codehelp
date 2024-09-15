#include<iostream>
using namespace std;
void minmax(int arr[]){
    int min = -100000;
    int max = arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>min){
            min = arr[i];
        }
        if(arr[i]<max){
            max = arr[i];
        }
    }
    cout<<"minimum value: "<<max;
    cout<<"maximum value: "<<min;
}
int main(){
    int arr[5] = {1,5,7,2,6};

    //printing the array
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    //function call
    minmax(arr);

}