// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
int main(){
    float unit;
    cout<<"enter the unit you have consumed "<<endl;
    cin>>unit;
    if(unit<=50){
        cout<<unit*0.5;
    }
    else if(unit>=50 && unit<=150){
        cout<<"Your bill amount is "<<unit*0.75;
    }
    else if(unit>150 && unit<=250){
        cout<<"Your bill amount"<<unit*1.2;
        
    }
    else if(unit>=250){
        int price=unit*1.5;
        int sage=unit*0.2;
        int total=price+sage;
        cout<<"Your bill amount"<<total;
    }
}
