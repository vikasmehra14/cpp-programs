#include<iostream>
using namespace std;


void spiral(int mat[4][4], int n, int m){
  int scol=0, srow=0;
  int erow=n-1, ecol=m-1;
  while(srow<=erow && scol<=ecol){
    
    for(int j=scol; j<=ecol; j++){
      cout<<mat[srow][j]<<' ';
    }
    for(int i=srow+1; i<=erow;i++){
      cout<<mat[i][ecol]<<' ';
    }
    if(scol!=ecol){
    for(int j=ecol-1; j>=scol; j--){
      cout<<mat[erow][j]<<' ';
    }
  }
    if(srow!=erow){
    for(int i=erow-1;i>=srow+1;i--){
      cout<<mat[i][scol]<<' ';
    }
  }
    srow++, scol++, erow--,ecol--;


}

}

int main(){
  int mat[4][4]={{1,2,3,4},
                {5,6,7,8},
                {9,10,11,12},
                {13,14,15,16}};
  spiral(mat,4,4);

}