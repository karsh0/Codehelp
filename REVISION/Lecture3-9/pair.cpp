#include<iostream>
#include<vector>
using namespace std;
// int min(int a,int b){
//     if(a<b){
//         return a;
//     }
//     return b;
// }
// int max(int a,int b){
//     if(a>b){
//         return a;
//     }
//     return b;
// }
vector<vector<int>> pairSum(vector<int> arr,int n,int key){
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            vector<int> temp;
            if(arr[i] + arr[j] == key){
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }
    }
    return ans;
}
int main(){
    //pair sum
    vector<int> arr = {1,2,3,4,5};
    int key = 5;

    vector<vector<int>> ans = pairSum(arr,arr.size(),key);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans.size();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
}