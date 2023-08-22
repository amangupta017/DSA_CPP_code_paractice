#include<iostream>
#include<vector>
using namespace std;

vector<int> selectionSort(int *arr[], int n){

    for(int i=0; i<n; i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                
                minIndex=j;
            }   
        }
        swap(arr[minIndex],arr[i]);
    }
    return arr
}

int main(){
    int arr[5]={4,5,89,1,3};
    vector<int> a=selectionSort(arr,5);
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    
}