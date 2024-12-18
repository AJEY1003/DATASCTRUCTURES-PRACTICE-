//triangle pattern using numbers
#include<iostream>
using namespace std;
int main(){
    int len;
    int breadth;
    cin>>len;
    
    int i=1;
    while(i<=len){
       int j=1;
       while(j<=i){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}
