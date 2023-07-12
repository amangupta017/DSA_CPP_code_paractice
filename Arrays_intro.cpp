#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i =0; i<size;i++){
        cout<<arr[i]<<" "<<endl;;
    }
}

int main (){

    
    int a[5]={1,5};
    
    printArray(a,15);
    int arraysize=sizeof(a)/sizeof(int) ;
    cout<<"The size of the array is : " <<arraysize<<endl;

}