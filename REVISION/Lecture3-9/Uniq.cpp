#include<iostream>
using namespace std;
int main(){
    int arr[5] = {7,6,4,6,7};
    //find unique element
    int temp = 0;
    for(int i=0;i<5;i++){
        temp = temp^arr[i];
    }
    cout<<"Unique element in array: "<<temp;
}