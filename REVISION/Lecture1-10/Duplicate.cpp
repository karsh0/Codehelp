
#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;
int main(){
    vector<int>arr = {1,2,3,7,4,8,7};
    sort(arr.begin(), arr.end());
    int size = arr.size();
    int i=0;
    int ans = 0;
    while(i<size-1){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                ans = arr[i];
            }
            else{
                break;
            }
        }
        i++;
    }
    cout<<"printing ans: ";
    cout<<ans;
}