#include<iostream>
using namespace std;
int main(){
    int len;
    int breadth;
    cin>>len;
    
    for(int i=1;i<=len;i++){
        for(int j=i;j<=len;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}
