#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cout<<"enter the coefficients of equation";
    cin>>a>>b>>c;
    int disc=b*b-4*a*c;
    if(disc>0){
    int root1=(-b+sqrt(disc)/2*a);
    int root2=(-b-sqrt(disc)/2*a);
    cout<<"the roots are"<<root1<<" "<<root2;
}
    if(disc==0){
        int root=-b/2*a;
        cout<<"the roots are repeated"<<root;
    }
    else if(disc<0){
        int realroot=-b/2*a;
        int imaginary=sqrt(-disc)/2*a;
        cout<<"the roots are real and imaginary"<<realroot<<imaginary<<endl;
    }
}
