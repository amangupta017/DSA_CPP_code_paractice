#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v;

    vector<int> a(5,1);//this will initialize all the elements in vector with 1 of size 5

    vector<int> last(a);//this will copy all the elements of vector a into vector last
    cout<<"printing a "<<endl;
    for (int i:a){
        cout<<i<<" ";

    }cout<<endl;

    cout<<"capacity : "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity : "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity : "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity : "<<v.capacity()<<endl;

    cout<<"size : "<<v.size()<<endl;

    cout<<"first element in vector : "<<v.front()<<endl;
    cout<<"last element in vector : "<<v.back()<<endl;
    cout<<"the elemnet at index 2 is : "<<v.at(2)<<endl;

    cout<<"Before pop "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"After pop "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"size befor clear "<<v.size()<<endl;
    v.clear();
    cout<<"size after clear "<<v.size()<<endl;

    cout<<"capacity : "<<v.capacity()<<endl;



}