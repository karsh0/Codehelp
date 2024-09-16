#include<iostream>
using namespace std;
int main(){
    int arr[6] = {1,2,3,4,5,6}; //element should be in monotonic functions
    int n=6;
    int key = 4;
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;

    while(s<e)
    {
        if(key == arr[mid]){
            cout<<"element found at: "<<mid<<endl;
        }
        if(key > arr[mid]){
            s = mid;
            mid = s+(e-s)/2;
        }
        else{
            e = mid-1;
            mid = s+(e-s)/2;
        }
    }

}