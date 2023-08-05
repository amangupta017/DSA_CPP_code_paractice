#include <iostream>
using namespace std;

int  binarySearch(int arr[], int size, int key){

    int start=0;
    int end=size-1;

    int mid = start +(end-start)/2;

    while(start<=end){

        if(arr[mid]==key){
            return mid;
        }
        // go to the right side

        if(key>arr[mid]){
            start = mid +1;
        }
        else{
            end = mid-1;
        }
        mid=start +(end-start)/2;
    }
    return -1;
}

void printArray(int arr[],int n){

    cout<<"The array is [ ";
    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]"<<endl;
}

int main(){
    int a;
    int arr[100];
    cout<<"Enter the size of the array : ";
    cin>>a;

    for(int i = 0; i<a; i++){
        cout<<"Enter the elements : ";
        cin>>arr[i];
        
    }

    int key;
    cout<<"Please enter the element you want to search : ";
    cin>>key;
    cout<<endl;
    printArray(arr,a);
    int index = binarySearch(arr,a,key);
    cout<<"The index of "<<key<<" is "<<index;

}