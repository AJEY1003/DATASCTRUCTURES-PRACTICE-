//rectangle *
#include<iostream>
using namespace std;
int main(){
    int len;
    int breadth;
    cin>>len;
    cin>>breadth;
    for(int i=1;i<=len;i++){
        for(int j=1;j<=breadth;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}
