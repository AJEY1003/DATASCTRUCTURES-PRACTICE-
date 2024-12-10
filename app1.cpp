#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int phy;
    int bio;
    int math;
    int comp;
    int che;
    
    cout<<"enter the physics marks"<<endl;
    cin>>phy;
     cout<<"enter the bio marks"<<endl;
    cin>>bio;
     cout<<"enter the math marks"<<endl;
    cin>>math;
     cout<<"enter the comp marks"<<endl;
    cin>>comp;
     cout<<"enter the che marks"<<endl;
    cin>>che;
    int percentage=(phy+bio+math+comp+che)/5;
    if(percentage>=90){
        cout<<"GRADE A";
    }
    else if(percentage>=80){
        cout<<"GRADE B";
        
    }
    else if(percentage>=70){
        cout<<"GRADE C";
    }
     else if(percentage>=60){
        cout<<"GRADE D";
    }
     else if(percentage>=40){
        cout<<"GRADE E";
    }
     else if(percentage<=40){
        cout<<"GRADE F";
    }
    

    
}
