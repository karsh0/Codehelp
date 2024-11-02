#include<iostream>
#include<vector>
using namespace std;
int peakElement(vector<int> arr, int size){
    //using binary search to find the pivot element in the array
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans = -1;

    while(s<e){
        if(arr[mid] < arr[mid+1]){
            e = mid;
        }
        else{
            s =mid+1;
        }


        mid=s+(e-s)/2;
    }
    return mid;
}
int main(){
    //[5,6,7,8,1,2,3] --> peak element is 8

    vector<int> arr = {5,6,7,8,1,2,3};
    int size = arr.size();

    int ans = peakElement(arr,size);
    cout<<"peak element is present at index: "<<ans;


    return 0;
}