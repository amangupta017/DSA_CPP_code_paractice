#include<iostream>
#include<map>
using namespace std;

int main(){

    map<int,string> m;

    m[1]="Hello";
    m[2]="aman";
    m[20]="gupta";

    //m.insert( { 6,"bye"} );

    cout<<"before erase "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    cout<<"2 is present or not : "<<m.count(2)<<endl;
    m.erase(1);
    cout<<"after erase "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;
    auto it=m.find(2);

    for(auto i=it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }


}