#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the range : ";
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<" "<<b;
    
    for(int i=0; i<n;i++){
        int nextnumber=a+ b;
        cout<<" "<<nextnumber<<" ";
        a=b;
        b=nextnumber;
    }
}