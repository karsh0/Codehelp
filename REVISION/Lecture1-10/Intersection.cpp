
#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;
int main(){
    vector<int>arr = {1,5,2,3,5};
    vector<int>arr2 = {4,5};
    int m = arr.size();
    int n = arr2.size();
    int ans = -1;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i] == arr[j]){
                ans = arr[j];
                arr[j] = -10000;
                break;
            }
        }
    }
    cout<<"printing ans: ";
    cout<<ans;
}