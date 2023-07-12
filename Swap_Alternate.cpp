#include <iostream>
using namespace std;

void swapAlternate(int arr[],int n){
    for (int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<' ';
    }
}
int main(){

    int even[8]={2,3,4,6,7,9,10,8};
    int odd[5]={34,-2,6,-5,-10};

    swapAlternate(even,8);
    printArray(even,8);
    cout<<endl;
    swapAlternate(odd,5);
    printArray(odd,5);

}