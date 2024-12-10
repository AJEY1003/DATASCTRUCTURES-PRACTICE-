#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year ";
    cin>>year;
   
    if(year%100==0){
        
            if(year%400==0){
                cout<<"It is a leap year";
            
        }
        else{
            cout<<"It is not a leap year";
        }
    }
     else if(year%4==0){
        cout<<"It is a leap year";
    }
    else{
        cout<<"the given year is not a leap year";
    }
}
