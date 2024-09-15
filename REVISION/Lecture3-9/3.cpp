#include<iostream>
using namespace std;
int main(){
   //prime or not
   int n;
   cin>>n;

    int i = 2;
   while(i<=n){
    if(n%i == 0){
        cout<<"not a prime number";
        i++;
    }
    else{
        cout<<"Prime number";
        break;
    }
   }

}