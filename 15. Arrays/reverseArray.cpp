#include<iostream>//array reverse using extra space
using namespace std;
int main(){
  int arr[]={2,3,4,5,6};
  int n=sizeof(arr)/sizeof(arr[0]);
  int rev[n],j;
  for(int i=0; i<n; i++){
    j=n-i-1;
    rev[i]=arr[j];

  }
  for(int i=0; i<n; i++){
    cout<<rev[i]<<endl;
  }
  return 0;
}