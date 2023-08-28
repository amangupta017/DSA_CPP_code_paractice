#include <iostream>
using namespace std;

void largestRowSum(int arr[][3],int row,int col){

    int max=INT_MIN;
    int rowIndex=-1;
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum+=arr[row][col];
        }
        if(sum>max)
            max=sum;
            rowIndex=row;
    }    
    cout<<"The largest row sum is : "<<max<<endl;
    cout<<"The largest sum row index is : "<<rowIndex<<endl;

}

int main(){

    int arr[3][3];

    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cin>>arr[row][col];
        }
    }

    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout<<arr[row][col]<<' ';
        }
        cout<<endl;
    }
    

    largestRowSum(arr,3,3);

    
}