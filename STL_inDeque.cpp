#include <iostream>
#include<deque>
using namespace std;

int main(){

    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    for(int i:d){
        cout<<i<<" ";
    }

    cout<<"The element at index 2 is "<< d.at(2)<<endl;
    cout<<"first element : "<<d.front()<<endl;
    cout<<"last element : "<<d.back()<<endl;
    cout<<"empty or not : "<<d.empty()<<endl;
    
    cout<<"Before erase size is "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase size is "<<d.size()<<endl;

    //d.pop_front();


}
