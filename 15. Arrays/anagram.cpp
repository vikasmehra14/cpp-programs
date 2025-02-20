#include<iostream>
#include<string>

using namespace std;
bool isAnagram(string s1, string s2){
  if(s1.length()!=s2.length()){
    cout<<"Not anagram";
    return 0;
}
int count[26]={0};
for(int i=0;i<s1.length();i++){
  int index=s1[i]-'a';
  count[index]++;
}
for(int i=0; i<s2.length();i++){
  int index=s2[i]-'a';
  if(count[index]==0){
    cout<<"Not valid anagram";
    return 0;
  }
}
cout<<"Valid";
return 1;
}
int main()
{ 
  string s1= "football";
  string s2= "balltoof";
  isAnagram(s1,s2);

return 0;
}