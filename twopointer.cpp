#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
      cin>>a[i];
  }
  int sum;
  int target;
  cin>>target;
  for(int i=0;i<n;i++){
      for(int j=i+1;j<n-2;j++){
          sum=a[i]+a[j];
          if(target==sum){
              cout<<a[i]<<","<<a[j];
          }
      }
  }

}  
//output 
// 5
// 10,20,30,40,50
//  70
//   20,50   30,40
