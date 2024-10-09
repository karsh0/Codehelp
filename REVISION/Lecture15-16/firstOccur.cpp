#include <iostream>
using namespace std;
int firstOccur(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid] > key){
            e = mid-1;
        }
        else if(arr[mid] < key){
            s = mid+1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}
int main()
{
    // finding the first and last occurence in array
    // strictly using binary search
    int arr[5] = {1, 2, 2, 2, 3};
    int n = 5;
    int key = 2;

    int ans = firstOccur(arr,n,key);
    cout<<"first occurance is at index: "<< ans;

    return 0;
}