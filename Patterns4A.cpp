//triangle pattern using numbers
#include<iostream>
using namespace std;
int main(){
    int len;
    int breadth;
    cin>>len;
    
    for(int i=1;i<=len;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    
}
//output
// 1
// 1 2
// 1 2 3
