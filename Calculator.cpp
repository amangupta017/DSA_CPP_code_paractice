#include <iostream>
using namespace std;
 int main(){
    int a,b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    char op;
    cout<<"Enter the operation you want to perform : ";
    cin>>op;
    switch (op)
    {
    case '+':cout<<(a+b)<<endl;
        break;
    case '-':cout<<(a-b)<<endl;
        break;

    case '*':cout<<(a*b)<<endl;
        break;

    case '/':cout<<(a/b)<<endl;
        break; 
    
    default: cout<<"Please enter a right operator ! ";
        break;
    }
 }