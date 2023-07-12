#include <iostream>
using namespace std;

void Getarray(int arr[],int size){

    for(int i =0;i<size;i++){
        cout<<arr[i]<<endl;
    }

}

int main(){
    int a=10;
    
    //cout<<"Enter the size of array :";
    //cin>>a;
    int b[]={1,2};

    Getarray(b,a);

}