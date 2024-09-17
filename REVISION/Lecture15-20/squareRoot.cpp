#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        int square = mid*mid;
        if(square == n){
            cout<<mid;
            return 0;
        }
        if(square < n){
            s=mid+1;
            ans = mid;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }

    cout<<ans;


    return 0;
}