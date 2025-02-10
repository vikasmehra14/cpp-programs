#include<iostream>
using namespace std;
void print(int *arr, int n){
  for(int i=0; i<n; i++){
    cout<<arr[i]<<' ';
  }

}
void insert(int *arr, int n){
  for(int i=1; i<n; i++){
    int pre=i-1;
    int cur=arr[i];
    while(pre>=0 && cur<arr[pre]){
      arr[pre+1]=arr[pre];
      pre--;
    }
    arr[pre+1]=cur;

  }
  print(arr,n);

}
int main(){
  int arr[]={5,4,1,3,2};
  int size=sizeof(arr)/sizeof(arr[0]);
  insert(arr,size);
}