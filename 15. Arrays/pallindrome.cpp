#include<iostream>
#include<cstring>
using namespace std;
bool pallindrome(char word[], int n){
  char start=0, end=n-1;
  while(start<end){
    if(word[start++]!= word[end--]){
      cout<<"Not pallindrome";
      return false;
    }
  }
  cout<<"It is pallindrome"; 
  return 1;

}
int main()
{
char word[]="race";
pallindrome(word, strlen(word));
return 0;
}