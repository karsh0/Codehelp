#include<iostream>
using namespace std;
int main(){
    //triangle pattern
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        int cnt = i;
        while(j<=i){
            cout<<cnt;
            cnt++;
            j++;
        }
        cout<<endl;
        i++;
    }

}