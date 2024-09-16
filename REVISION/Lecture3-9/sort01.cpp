#include<iostream>
using namespace std;
void printArray(int *arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
}
void sortOne(int *arr, int n){
    int left = 0;
    int right = n-1;
    while(left < right && left<right){
        while(arr[left] == 0){
            left++;
        }
        while(arr[right] == 1 && left<right){
            right--;
        }
        if(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
    printArray(arr,n);
}
int main(){
    //sort 0 1
    int arr[6] = {0,1,0,1,1,0,};
    int n = 6;
    sortOne(arr,n);
    // printArray(arr,n);

}