#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //swap alternate
    int s=0;
    int e=s+1;
    while(e<n){
        swap(arr[s],arr[e]);
        s = s+2;
        e = s+1;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}