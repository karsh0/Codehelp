#include<iostream>
using namespace std;
void sum(int *arr, int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"Sum of the array: "<<sum;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    sum(arr,5);
}