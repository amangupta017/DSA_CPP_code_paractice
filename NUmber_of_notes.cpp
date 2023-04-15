#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the amount : ";
    cin>>n;
    int h=n/100;
    int n1=n-(h*100);
    int f=n1/50;
    int n2=n1-(f*50);
    int t=n2/20;
    int n3=n2-(t*20);
    int o=n3/1;
    cout<<"The number of 100 notes will be : "<<h<<endl;
    cout<<"The number of 50 notes will be : "<<f<<endl;
    cout<<"The number of 20 notes will be : "<<t<<endl;
    cout<<"The number of 1 notes will be : "<<o<<endl;
}