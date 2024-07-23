#include<iostream>
using namespace std;

int main(){
  string str;
  int i=0,count=0;
  char c;
  cin>>str;
  while(str[i]!='\0'){
  	c=str[i] |32; //count capital vowels also
    if(c=='a' || c=='o'||c=='e'|| c=='i'|| c=='u' ){
        count++;
        str[i]=str[i] & ~32; //conver all to upper
    }
    else
      str[i]=c;
 
 
     i++;
  }
  cout<<count<<"\n";
  cout<<str;
  
 
}
