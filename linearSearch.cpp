#include <iostream>
using namespace std;

bool search(int arr[], int size, int key){

    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){

    int a;
    cout<<"Enter the size of the array : ";
    cin>>a;
    int b[100];
    cout<<"Enter the array : ";
    for(int i =0;i<a;i++){
       
        cin>>b[i];
    }
    int key ;
    cout<<"Enter the element you want to search : ";
    cin>>key;
    bool found = search(b,a,key);
    if(found){
        cout<<"That element is present ";

    }
    else{
        cout<<"That element is absent ";
    }
}