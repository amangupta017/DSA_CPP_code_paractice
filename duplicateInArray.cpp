#include <iostream>
#include <vector>
using namespace std;
class solution{
    public:

        vector<int> findDuplicate(vector<int> &arr){
            vector<int> ans;
            int n=arr.size();
            for (int i =0;i<n;i++){
                ans=(ans^arr[i]);
            }
            for(int i =1;i<n;i++){
                ans=ans^i;
                
            }
            return ans;
        }
};

void printArray(vector<int> arr){
    cout<<'[';
    for (int i =0; i<arr.size();i++){
        cout<<arr[i]<<',';
    }
    cout<<"]"<<endl;
}

main(){
    solution ob;
    vector<int> a={1,4,3,3,5};
    printArray(ob.findDuplicate(a));
}
