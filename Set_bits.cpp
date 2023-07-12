#include <iostream>
using namespace std;

int main() {
    int n,m;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Enter a number : ";
    cin>>m;
    int count1=0;
    while(n!=0){
        if(n&1){
            count1++;
        }
        n=n>>1;
    }
    int count2=0;
    while(m!=0){
        if(m&1){
            count2++;
        }
        m=m>>1;
    }
    cout<< count1+count2;
}
