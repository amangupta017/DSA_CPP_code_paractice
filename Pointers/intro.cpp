#include <iostream>
using namespace std;

int main(){

    int num=5;
    cout<<num<<endl;;
    cout<<"The address of num is : "<<&num<<endl;

    int *ptr = &num;
    cout<<"Address : "<<ptr<<endl;
    cout<<"value of num : "<<*ptr<<endl;
    cout<<"size of integer : "<<sizeof(num)<<endl;
    cout<<"size of pointer is  : "<<sizeof(ptr)<<endl;

    double d=4.2;
    double *p2=&d;
    cout<<"Address : "<<p2<<endl;
    cout<<"value of d : "<<*p2<<endl;
    cout<<"size of double : "<<sizeof(d)<<endl;
    cout<<"size of pointer is  : "<<sizeof(p2)<<endl;


}