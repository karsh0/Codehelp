#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,3,4,2,3};
    int n=5;
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    for(int i=1;i<n;i++){
        ans = ans^i;
    }
    cout<<ans;
}