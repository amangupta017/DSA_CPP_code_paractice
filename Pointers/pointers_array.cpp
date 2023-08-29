#include <iostream>
using namespace std;

int main(){

    // int arr[10]={23,122,41,67};
    // cout<<"Address of first memory block is : "<<arr<<endl;
    // cout<<"Address of first memory block is : "<<&arr[0]<<endl;
    // cout<<*arr<<endl;
    // cout<<*arr+1<<endl;
    // cout<<*(arr+1)<<endl;
    // cout<<(*arr)+1<<endl;
    // cout<<arr[2]<<endl;
    // cout<<*(arr + 2)<<endl;

    // int i=3;
    // cout<<i[arr]<<endl;

    // int temp[10]={1,2};
    // cout<<sizeof(temp)<<endl;
    // cout<<sizeof(*temp)<<endl;
    // cout<<sizeof(&temp)<<endl;

    // int *ptr=&temp[0];
    //  cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(*ptr)<<endl;
    // cout<<sizeof(&ptr)<<endl;

    // int a[20]={1,2,3,4};
    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<&a[0]<<endl;

    // int *p=&a[0];
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<&p<<endl;

    int arr[10];
   // arr=arr+1;
    int *p=&arr[0];
    cout<<p<<endl;
    p=p+1;
    cout<<p<<endl;


}