#include<iostream>
using namespace std;
void swapAlternate(int *arr, int n){
    int s=0;
    int e=s+1;
    while(e<=n){
        swap(arr[s],arr[e]);
        s = s+2;
        e = s+1;
    }
}
int main(){
    int arr[6] = {1,2,3,4,5,6};
    swapAlternate(arr,5);
    //printing
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}