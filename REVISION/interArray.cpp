#include<iostream>
using namespace std;
int main(){
    //intersection of array
    int arr1[6] = {1,2,2,2,3,4};
    int arr2[4] = {2,2,3,3};

    for(int i=0;i<6;i++){
        int ans = arr1[i];
        for(int j=0;j<4;j++){
            if(ans == arr2[j]){
                cout<<"ans: "<<arr2[j]<<endl;
                arr2[j] = -1100;
                break;
            }
        }
    }
}