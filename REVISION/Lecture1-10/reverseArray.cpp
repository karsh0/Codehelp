#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}