#include <iostream>
#include<list>
using namespace std;

int main(){

    list<int> d;
    list<int> l(5,100);
    
    
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    d.push_back(1);
    d.push_front(2);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"first element : "<<d.front()<<endl;
    cout<<"last element : "<<d.back()<<endl;
    cout<<"empty or not : "<<d.empty()<<endl;
    
    cout<<"Before erase size is "<<d.size()<<endl;
    d.erase(d.begin());
    cout<<"after erase size is "<<d.size()<<endl;

    //d.pop_front();


}