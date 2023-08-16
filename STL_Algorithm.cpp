#include<iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"finding 6 : "<<binary_search(v.begin(),v.end(),6)<<endl;
    cout<<"lower bound : "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound : "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    int a=34;
    int b=23;

    cout<<"max : "<<max(a,b)<<endl;
    cout<<"min : "<<min(a,b)<<endl;

    swap(a, b);
    cout<<"a : "<<a<<endl;

    string abcd="aman Gupta";
    reverse(abcd.begin(),abcd.end());
    cout<<"reversing the string : "<<abcd<<endl;

    rotate(v.begin(),v.begin()+2,v.end());
    cout<<"Rotating a vector : ";
    for(int i:v){
        cout<<i<<' ';
    }cout<<endl;

    sort(v.begin(),v.end());
    cout<<"sortig the vector :";
    for(int i:v){
        cout<<i<<" ";
    }


}