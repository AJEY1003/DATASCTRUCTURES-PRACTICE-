#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int org=n;
    int sum=0;
    while(n>0){
        int num=n%10;
            int fact=1;
        for(int i=2;i<=num;i++){
            fact*=i;
        }
        sum+=fact;
        n=n/10;
    }
    cout<<sum<<endl;
    if(sum==org){
        cout<<"it is a peterson number";
    }
    else{
        cout<<"it is not a peterson number";
    }
}
