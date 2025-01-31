#include<iostream>
using namespace std;
int modArray(int ptr[],int size){
  ptr[1]=2;
  for(int i=0; i<size; i++){
    cout<<ptr[i]<<" ";
  }
  return 0;
}
int main(){
  int arr[]={4,5,6,7,8};
  int n;
  n=sizeof(arr)/sizeof(arr[0]);
  modArray(arr,n);
  return 0;
}