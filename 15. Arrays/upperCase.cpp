#include<iostream>
#include<cstring>
using namespace std;
void toUpper(char word[], int len){
  
  for(int i=0; i<len; i++){
    char ch=word[i];
    if(ch>='A'&& ch<='Z')
    continue;
    else if(ch>='a'&& ch<='z'){
      word[i]=ch-'a'+'A';
    }
  }
  cout<<word;
    

}
int main()
{
char word[]="adjfhakdsjh";
toUpper(word,strlen(word));
return 0;
}