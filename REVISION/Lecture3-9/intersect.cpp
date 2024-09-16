#include<iostream>
using namespace std;
int main(){
    //intersection of array
    int arr[5] = {1,2,2,3,4};
    int arr2[3] ={5,2,4};

    for(int i=0;i<5;i++){
        int temp = arr[i];
        for(int j=0;j<3;j++){
            if(temp == arr2[j]){
                cout<<arr2[j]<<" ";
                arr2[j] = -1000;
                break;
            }
        }
    }
}