#include <iostream>
using namespace std;

int  firstOccurence(int arr[], int size, int key){

    int start=0;
    int end=size-1;
    int ans = -1;
    int mid = start +(end-start)/2;

    while(start<=end){

        if(arr[mid]==key){
            ans=mid;
            end = mid - 1;
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
    return ans ;
}

int  lastOccurence(int arr[], int size, int key){

    int start=0;
    int end=size-1;
    int ans = -1;
    int mid = start +(end-start)/2;

    while(start<=end){

        if(arr[mid]==key){
            ans=mid;
            start = mid + 1;
        }
        // go to the right side

        if(key>arr[mid]){
            start = mid +1;
        }
        else if(key<arr[mid]){
            end = mid-1;
        }
        mid=start +(end-start)/2;
    }
    return ans ;
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
    cout<<"First occurence of "<<key<<" is at index "<<firstOccurence(arr,a,key)<<endl;
    cout<<"Last occurence of "<<key<<" is at index "<<lastOccurence(arr,a,key)<<endl;
    return 0;
}