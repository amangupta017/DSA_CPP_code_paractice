#include <iostream>
using namespace std;

int getSum(int *p,int n){

    if(n==0)
        return 0;
    if(n==1)
        return p[0];
    int ans = p[0]+getSum(p+1,n-1);
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int *p=new int[n];
    for(int i=0; i<n; i++){
        cin>>p[i];
    }cout<<endl;

    int sum = getSum(p,n);
    cout<<"The sum of array is "<<sum<<endl;
}