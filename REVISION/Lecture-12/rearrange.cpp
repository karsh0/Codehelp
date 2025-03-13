#include<bits/stdc++.h>
using namespace std;
void Rearrange(vector<int> &arr){
    for(int i=0;i<arr.size()-1;i++){
        if(i%2 == 0 && arr[i] < 0){
            swap(arr[i], arr[i+1]);
        }
        else if(i%2 == 1 && arr[i] > 0){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){

    vector<int> arr = {-1,3,5,-2,-6,1,5,-8};
    Rearrange(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}