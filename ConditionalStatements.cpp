#include <iostream>
using namespace std;

int main(){
    /*int a,b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
   
    if(a>b){
        cout<<a<<" is greater"<<endl;

    }
    else{
        cout<<b<<" is greater"<<endl;

    }*/
    int a;
    cout<<"Enter a number : " ;
    cin>>a;
    if (a>0){
        cout<<a<<" is positive "<<endl;
    }
    else if (a<0){
        cout<<a<<" is negative"<<endl;
    }
    else{
        cout<<a<< "is zero"<<endl;
    }


}