///upper case, lower case, numeric
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;

    if(ch>='a' && ch<='z'){
        cout<<"It is lowercase";
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"It is uppercase";
    }
    else{
        cout<<"It is numeric";
    }

}