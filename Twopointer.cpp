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
      for(int j=n-1;j>0;j--){
          sum=a[i]+a[j];
          if(target==sum){
              cout<<a[i]<<","<<a[j];
          }
      }
  }

}
