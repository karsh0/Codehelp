#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,3,5,7,3};
    int n = 5;
    //find duplicates
    for(int i=0;i<n;i++){
        int temp = arr[i];
        for(int j=i+1;j<n;j++){
            if(temp == arr[j]){
                cout<<"Duplicate found: "<<arr[j];
            }
        }
    }
    
}