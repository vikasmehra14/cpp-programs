#include<iostream>
using namespace std;
int kadaneAlgorithm(int *arr, int n){
    int currentSum=0, maxSum=INT8_MIN;
    for(int i=0; i<n; i++){
      currentSum+=arr[i];
      maxSum=max(currentSum,maxSum);
      if(currentSum<0){
        currentSum=0;
      }

    }
    return maxSum;
  }
  
  int main(){
    int arr[]={2,-3,6,-5,4,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<kadaneAlgorithm(arr,size);
    return 0;
  }