#include <iostream>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}
int main(){
    int arr[5]={1,4,3,5,7};
    int brr[7]={12,-23,5,6,7,2,9};
    reverse(arr,5);
    reverse(brr,7);
    printArray(arr,5);
    printArray(brr,7);
}