#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue<string> q;

    q.push("aman");
    q.push("gupta");
    q.push("hello");

    cout<<"size before pop "<<q.size()<<endl;
    cout<<"element at front or first : "<<q.front()<<endl;
    q.pop();
    cout<<"element at front or first : "<<q.front()<<endl;
    cout<<"size after pop "<<q.size()<<endl;
}