#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int key, int row, int col){
    for (int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==key){
                return 1;
            }
        }
    }
    return 0;    
}

int main(){

//create 2D array
//int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
int arr[3][4];

//taking input ->row wise
for (int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cin>>arr[i][j];
    }
}

//taking input ->col wise
/*for (int i=0;i<4;i++){
    for(int j=0;j<3;j++){
        cin>>arr[j][i];
    }
}*/

//printing
for (int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
int key;
cout<<"Enter the element you want to search :";
cin>>key;
cout<<endl;

if(isPresent(arr,key,3,4)){
    cout<<"Element present"<<endl;

}
else{
    cout<<"Not present"<<endl;
}
return 0;


}