#include<iostream>
using namespace std;
int binarySearch(int *arr,int s,int e, int elem){
    int mid= s+(e-s)/2;
    while(s<e){
        if(arr[mid] == elem){
            return mid;
        }
        else if(elem>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return mid;
}
int findPivot(int *arr,int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]>arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return mid;
}
int main(){
    //search in rotated and sorted array
    //search the pivot element and then decide the part

    int arr[5] = {7,9,1,2,3};
    int n = 5;
    int target = 2;

    //finding the pivot element
    int pivot = findPivot(arr,n);
    cout<<"pivot: "<<pivot<<endl;

    //binary search
    if(target >= arr[pivot] && target <= arr[n-1]){
        cout<<binarySearch(arr,pivot,n-1,target);
    }
    else{
        cout<<binarySearch(arr,0,pivot-1,target);
    }

    return 0;
}