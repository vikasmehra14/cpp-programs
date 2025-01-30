#include<iostream>
using namespace std;
int main(){
  int n,max=0;
  cout<<"Enter the total number of elements \n";
  cin >> n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];

  }
  for(int i=1; i<n; i++){
    if(arr[i]>max){
      max=arr[i];
    }
    
  }
  cout<<"Max element is "<<max;
  return 0;
}