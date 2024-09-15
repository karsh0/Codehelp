#include<iostream>
using namespace std;
bool linearSearch(int *arr, int n,int elem){
    for(int i=0;i<n;i++){
        if(arr[i] == elem){
            return true;
        }
    }
    return false;
}
int main(){
    //linear search
    int n;
    cin>>n;

    int arr[5] = {2,3,7,5,1};
   bool found =  linearSearch(arr,5,n);
   if(found){
    cout<<"Element found";
   }
   else{
    cout<<"Element not found";
   }
}