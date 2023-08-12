#include <iostream>
#include<stack>
using namespace std;

int main(){

    stack<string> s;

    s.push("aman");
    s.push("gupta");
    s.push("hello");

    cout<<"element at top : "<<s.top()<<endl;
    s.pop();
    cout<<"element at top : "<<s.top()<<endl;

    cout<<"size : "<<s.size()<<endl;
    cout<<"Empty or not "<<s.empty()<<endl;
}