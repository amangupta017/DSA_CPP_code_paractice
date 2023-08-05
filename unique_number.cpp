#include <iostream>
using namespace std;

void findUnique(int *arr,int n){
    int ans=0;
    for (int i=0;i<n;i++){
       
        ans = ans^arr[i]; 
    }
    cout<<ans;
}

void printArray(int arr[], int size){
    cout<<"[";
    for (int i=0;i<size;i++){
        cout<<arr[i]<<",";
    }
    cout<<"]"<<endl;
}

int main(){
    int arr[5]={1,3,3,2,1};
    printArray(arr,5);
    findUnique(arr,5);
    
}