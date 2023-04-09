#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
     char Start='A';
    while (i<=n){
        int j=1;
        
        while(j<=i){
            
            cout<<Start;
            Start=Start+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}