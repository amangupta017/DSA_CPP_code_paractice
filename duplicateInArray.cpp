#include <iostream>
using namespace std;

int findDuplicate(int arr[],int n){

    int ans=0;
    for(int i=0; i<n;i++){
        ans=ans^arr[i];
    }    
    for(int i=1; i<n; i++){
        ans=ans^i;
    }
    return ans;

}



void printArray(int  arr[],int n){
    cout<<'[';
    for (int i =0; i<n;i++){
        cout<<arr[i]<<',';
    }
    cout<<"]"<<endl;
}

int main(){
    int arr[5]={1,2,3,3,4};
    printArray(arr,5);
    findDuplicate(arr,5);
    
}
