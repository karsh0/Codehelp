#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> pairSum(vector<int> arr,int n,int key){
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           for(int k=j+1;k<n;k++){
             vector<int> temp;
            if(arr[i] + arr[j] + arr[k] == key){
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                temp.push_back(arr[k]);
                ans.push_back(temp);
            }
           }
        }
    }
    return ans;
}
int main(){
    //triplet sum
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int key = 12;

    vector<vector<int>> ans = pairSum(arr,arr.size(),key);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
}