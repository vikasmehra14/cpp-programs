#include<iostream>
using namespace std;
void print(int *arr, int size){
  cout<<"The sorted array is: ";
  for(int i=0;i<size;i++){
    cout<<arr[i]<<' ';
  }
}
void sort(int *arr, int n){
  bool isSwap=false;
  for(int i=0; i<n-1; i++){
    for(int j=0; j<n-i-1; j++)
    if(arr[j]>arr[j+1]){
      swap(arr[j],arr[j+1]);
      isSwap=true;
    }

  }
  if(!isSwap){
    return;
  }
  print(arr, n);
  
}
int main(){
  int arr[]={5,4,1,3,2};
  int n=sizeof(arr)/sizeof(arr[0]);
  sort(arr, n);
  return 0;
}