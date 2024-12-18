#include<iostream>
using namespace std;
int main(){
    int len;
    int breadth;
    cin>>len;
    cin>>breadth;
   int i=1;
   
   while(i<=breadth){
       int j=1;
       while(j<=len){
           cout<<i;
           j++;
       }
       cout<<endl;
       i++;
   }
   
    
}
