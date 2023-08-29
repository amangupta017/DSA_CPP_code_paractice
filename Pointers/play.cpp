#include <iostream>
using namespace std;

int main(){

    // int i=5;
    // int *p=0;
    // p=&i;
    // cout<<p<<endl;
    // cout<<*p<<endl;

    // int *q=&i;
    // cout<<q<<endl;
    // cout<<*q<<endl;

    int num=5;
    int a=num;
    
    int *p=&num;
    cout<<"Before "<<*p<<endl;
    (*p)++;
    cout<<"After "<<*p<<endl;

    int *q=p;
    cout<<p<<" - "<<q<<endl;
    cout<<*p<<" - "<<*q<<endl;

    int i=3;
    int *t=&i;
    cout<<"Address brfore increment : "<<t<<endl;
    t=t+1;
    cout<<"Address after increment : "<<t<<endl;

}