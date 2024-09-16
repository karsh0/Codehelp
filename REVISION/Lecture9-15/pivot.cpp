#include<iostream>
#include<vector>
using namespace std;
int findPivot(vector<int>arr ,int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid]>arr[0]){
            //first line
            s = mid+1;
        }
        else{
            //second line
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return arr[mid];
}
int main(){
    
    vector<int> arr = {5,6,7,1,2,3};
    int n = arr.size();

    int ans = findPivot(arr,n);
    cout<<"element: "<<ans;

    return 0;
}