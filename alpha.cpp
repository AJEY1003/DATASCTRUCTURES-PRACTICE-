#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"enter the character ";
    cin>>a;
    if(isalpha(a)){
        cout<<"it is a alphabet character";
    }
    else {
        cout<<"it is not a character";
    }
}
