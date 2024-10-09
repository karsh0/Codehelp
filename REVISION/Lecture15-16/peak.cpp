#include<iostream>
using namespace std;
int main(){
    //find the peak element iin the array
    //[1,2,3,9,8,7] --> peak elem here is 9
    //we have to use binary search for it 

        int arr[6] = {1,2,4,5,8,6};
        int n = 6;
        int s = 0;
        int e = n-1;
        int mid = (s+e)/2;

        while(s<e){
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
                cout<<"peak value is: "<<arr[mid];
                break;
            }
            else if(arr[mid-1]<arr[mid]){
                s = mid+1;
            }
            else{
                e = mid;
            }
            mid = (s+e)/2;
        }


    return 0;
}