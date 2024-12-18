#include<iostream>
using namespace std;
int main(){
    int len;
    cin>>len;
    int i=1;
    while(i<=len){
        int j=1;
        while(j<=len){
            if(i==1||i==len||j==1||j==len){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            j++;
        }
        cout<<endl;
        i++;
    }
    
}
