#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int x=i;
        while(j<=i){
            cout<<x++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
