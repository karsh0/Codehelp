#include<iostream>
using namespace std;
int main()
{
    //binary search 
    //foir binary search the array should be a monotonous function
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    int elem = 4;

    int s=0;
    int e=n-1;
    int mid=(s+e)/2;

    while(s<=e){
        if(arr[mid] == elem){
            cout<<"element found at index: "<<mid;
            break;
        }
        else if(arr[mid] < elem){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = (s+e)/2;
    }

    return 0;
}
