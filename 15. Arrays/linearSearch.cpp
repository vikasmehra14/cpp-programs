#include<iostream>
using namespace std;
int main(){
  int key, arr[6]={3,7,0,18,87,22};
  int size= sizeof(arr)/sizeof(arr[0]);
  bool found=false;
  cout<<"Which element you want to search? ";
  cin>>key;
  for(int i=0; i<size; i++){
    if(arr[i]==key){
      cout<<"Element found at index "<<i;
      found=true;
      break;
    }
}
if(!found){
  cout<<"Element not found";
}
return 0;
}