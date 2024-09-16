#include<iostream>
using namespace std;
int firstOccur(int *arr, int n, int key){
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    int ans = 0;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid-1;
        }
        else if(key > arr[mid]){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
            mid = s+(e-s)/2;

    }
    return ans;
}
int lastOccur(int *arr, int n, int key){
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    int ans = 0;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid+1;
        }
        else if(key > arr[mid]){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
            mid = s+(e-s)/2;

    }
    return ans;
}
int main(){
    int arr[6] ={1,3,3,3,4,5};
    int n = 6;
    int key = 3;

   int first = firstOccur(arr,n,key);
   cout<<"first: "<<first;
   cout<<endl;
   int last = lastOccur(arr,n,key);
   cout<<"last: "<<last;


    return 0;
}