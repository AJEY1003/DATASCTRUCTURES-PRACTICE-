#include<iostream>
using namespace std;
int main(){
    int len;
    
    cin>>len;
    
    int i=1;
    while(i<=len){
       int j=1;
       while(j<=len){
            cout<<j;
            j++;
        }
        cout<<endl;
        len--;
    }
    
}
