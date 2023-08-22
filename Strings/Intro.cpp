#include <iostream>
using namespace std;

char toLowerCase(char ch){

    if(ch>='a'&&ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

bool checkPalindrom(char a[], int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(toLowerCase(a[s++])==toLowerCase(a[e--])){
            return 1;
        }
    }
    return 0;
}

void reverse(char name[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int getLenght(char name[]){
    int count=0;
    for(int i=0; name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){

    char name[20];

    cout<<"Enter you name : ";
    cin>>name;
    //name[2]='\0';
    cout<<"Your name is "<<name<<endl;
    int len=getLenght(name);
    cout<<"The lenght of the string is : "<<len<<endl;

    reverse(name,len);
    cout<<"The reverse of the string is : "<<name<<endl;

    cout<<"Palindrem or not : "<<checkPalindrom(name,len)<<endl;

   cout<<"upper to lowercase : "<<  toLowerCase('A')<<endl;

} 