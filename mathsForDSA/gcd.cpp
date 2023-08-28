#include<iostream>
using namespace std;

int getGCD(int a,int b){
    
    if(a==0)
    return b;

    if(b==0)
    return a;

    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;

}

int main(){

    int a,b;
    cout<<"Enter the value of a and b : "<<endl;
    cin>> a >> b ;
    int ans=getGCD(a,b);
    cout<<"The GCD of the given numbver is : "<<ans<<endl;
}