#include<iostream>
using namespace std;
int main(){
    int arr[4] = {0,10,5,2};
    int n=4;
    int s=0, e=n-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid = s+(e-s)/2;
    }
    cout<<"answer: "<<arr[mid];

}