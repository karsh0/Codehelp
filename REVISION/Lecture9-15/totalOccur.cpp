#include<iostream>
using namespace std;
int firstOccur(int *arr,int n,int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=0;
    while(s<=e){
        if(arr[mid]==k){
            ans = mid;
            e = mid-1;
        }
        else if(k > arr[mid]){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastOccur(int *arr,int n,int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=0;
    while(s<=e){
        if(arr[mid]==k){
            ans = mid;
            s = mid+1;
        }
        else if(k > arr[mid]){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int arr[5] = {0,1,1,1,2};
    int n=5;
    int k=1;

    int first = firstOccur(arr,n,k);
    int last = lastOccur(arr,n,k);
    int total = (last-first)+1;
    cout<<"Total Occurance: "<<total;

}