#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {3,4,5,2,1};

    int s=0;
    int e=arr.size();
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }

    cout<<"Peak element is: "<<mid;

    return 0;
}