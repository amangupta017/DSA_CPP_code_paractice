#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    if(islower(ch)){
        cout<<"The character is lower"<<endl;
    }
    else if(isupper(ch)){
        cout<<"The character is upper "<<endl;

    }
    else{
        cout<<"The character is number";
    }
}