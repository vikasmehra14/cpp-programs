#include<iostream>
using namespace std;

int maxSubArray(int *arr, int n){
  int maxSum=INT8_MIN;
  int start ,currentSum;
  for(int start=0; start<n; start++){ // Loop to set the starting index of subarrays
    for(int end=start; end<n;end++){         // Loop to set the ending index of subarrays

      currentSum=0;
      for(int i=start;i<=end;i++){            // Loop to calculate the sum of elements from start to end

        currentSum+=arr[i];
      }
      cout<<currentSum<<",";
      maxSum=max(currentSum,maxSum);
    }
    cout<<endl;

  }
  cout<<"Maximum sum is: "<<maxSum;
  return 0;
}

int main(){
  int arr[]={2,-3,6,-5,4,2};
  int size=6;
  maxSubArray(arr, size);
  return 0;
}