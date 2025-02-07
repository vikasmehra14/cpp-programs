#include<iostream>
#include<climits>
using namespace std;
int buy(int *prices, int n){
  int buyArray[100], profit[100];
  buyArray[0]=INT_MAX;
  
  for(int i=0; i<n; i++){
    buyArray[i+1]=min(prices[i], buyArray[i]);
  }
  
  int currentProfit=0, netProfit=0;
  for(int i=0;i<n; i++){
    currentProfit=prices[i]-buyArray[i];
    netProfit=max(currentProfit,netProfit);
  }
  if(netProfit<=0){
    return -1;
  }
  return netProfit;
}
  
  int main(){
  int prices[]={7,1,5,3,6,4};
  int size=sizeof(prices)/sizeof(prices[0]);
  cout<<buy(prices, size);
  return 0;
}