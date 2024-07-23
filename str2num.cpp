#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main(){
	
	

	string str1,str2;
	cin>>str1>>str2;
	int oldp,newp;
	oldp=str2num(str1);
	newp=str2num(str2);
	

}
    
int str2num(string str){
	int i=0;
	int x=0;
	while(str[i]!='\0'){
		x=x*10+str[i]-48;
		i++;
	}
	return x;
}