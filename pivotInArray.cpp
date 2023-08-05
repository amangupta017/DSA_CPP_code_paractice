#include <iostream>
using namespace std;

int getpivot(int arr[], int size){

    int start=0;
    int end=size-1;

    int mid = start +(end-start)/2;

    while(start<end){

        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        
        else{
            end = mid;
        }
        mid=start +(end-start)/2;
    }
    return start;
}



int main(){
    int arr[5]={5,6,9,1,2};

    cout<<"Pivot is "<<getpivot(arr,5);
}