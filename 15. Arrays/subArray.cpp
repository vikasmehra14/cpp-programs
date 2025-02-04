#include<iostream>
using namespace std;

int printSubArray(int *arr, int n){
  for(int i=0; i<n; i++){
    for(int j=i; j<n; j++){
      cout<<"("<<i<<" , "<<j<<")  ";

    }
    cout<<endl;
  }
  return 0;
}
int main(){
  int arr[]={1,2,3,4,5};
  int n=5;
  printSubArray(arr,n);
}