#include <iostream>
using namespace std;

bool checkPalindrome(string& str,int i, int j){

    //base case
    if(i>j)
        return true ;

    if(str[i++]!=str[j--]){
        return false ;
    }
    else{
        
        return checkPalindrome(str,i,j);
    }
}

int main(){

    string str="noon";
    cout<<endl;

    bool ans = checkPalindrome(str,0,str.length()-1);
    if(ans){
        cout<<"Its a palindrome"<<endl;
    }
    else{
        cout<<"Its a not palindrome"<<endl;
    }
}