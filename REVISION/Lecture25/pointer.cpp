#include<iostream>
using namespace std;
int main(){

    // int num = 5;
    // cout<<"num: "<<num<<endl;

    // int *ptr = &num;
    // cout<<"address ptr: "<<ptr<<endl;
    // cout<<"value ptr: "<<*ptr<<endl;
    // cout<<"increaing the values"<<endl;

    // cout<<(num)++<<endl;
    // cout<<(*ptr)++<<endl;

    // //copying a pointer

    // int *q = ptr;
    // cout<<"q: "<<*q<<endl;
    // cout<<"address of q: "<<q<<endl;


float f = 10.5;
float p = 2.5;
float* ptr2 = &f;
(*ptr2)++;
*ptr2 = p;
cout << *ptr2 <<" "<< f <<" "<< p;

int *ptr = 0;
int a = 10;
*ptr = a;
cout << *ptr << endl;

    return 0;
}