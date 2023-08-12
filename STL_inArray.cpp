#include <iostream>
#include <array>
using namespace std;

int main(){

    int basic[3]={1,2,3};
    array <int,4> a = {1,2,3,4};

    int size = a.size();

    cout<<"the size of the array is : "<<size<<endl;

    for (int i=0; i<size; i++){
        cout<<a[i]<<endl;
    }

    cout<<"empty or not : "<<a.empty()<<endl;
    cout<<"first element in array : "<<a.front()<<endl;
    cout<<"last element in array : "<<a.back()<<endl;
    cout<<"the elemnet at index 2 is : "<<a.at(2)<<endl;

}