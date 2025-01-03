#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {1,2,3,4,5,8,27,38,70,99};
    int size = arr.size();
    int key;
    cin>>key;
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(key > arr[mid]){
            s = mid+1;
        }
        else if(key < arr[mid]){
            e = mid-1;
        }
        else if(key == arr[mid]){
            ans = mid;
            break;
        }
       mid=s+(e-s)/2;
    }
    cout<<"printing answer: ";
    cout<<ans;
}