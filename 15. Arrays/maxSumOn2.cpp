#include<iostream>
using namespace std;
int maxSumSubArray(int *arr, int n){
  int maxSum=INT8_MIN, currentSum;
  for(int start=0; start<n; start++){
    currentSum=0;
    for(int end=start; end<n; end++){
      currentSum+=arr[end];
      maxSum=max(currentSum,maxSum);
    }


  }
  cout<<"The maximum sum is: "<<maxSum;

}
int main(){
  int arr[]={2,-3,6,-5,4,2};
  int size=6;
  maxSumSubArray(arr,size);

}