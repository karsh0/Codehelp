#include<iostream>
#include<vector>
using namespace std;
int pivotElement(vector<int> arr, int size){
    //using binary search to find the pivot element in the array
    int s=0;
    int e=size-1;
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
    //[5,6,7,8,1,2,3] --> pivot element is 1

    vector<int> arr = {5,6,7,8,1,2,3};
    int size = arr.size();

    int ans = pivotElement(arr,size);
    cout<<"Pivot element is present at index: "<<ans;


    return 0;
}