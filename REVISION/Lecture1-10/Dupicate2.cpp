
#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;
int main(){
    vector<int>arr = {1,2};
    sort(arr.begin(), arr.end());
    int size = arr.size();
    int i=0;
    vector<int> ans;
    while(i<size-1){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                ans.push_back(arr[i]);
            }
            else{
                break;
            }
        }
        i++;
    }

    cout<<"printing ans: ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}