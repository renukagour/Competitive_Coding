#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	int f1=0,f2=0,f3=0,f4=0,f5=0,i;
	i=0;
	if(str.size()>=8)
		  f1=1;
	while(str[i]!='\0'){
		
		if(f2==0 && str[i]>=65 && str[i]<91)
			 f2=1;
		else if(0==f3 && str[i]>=97 && str[i]<123)
		     f3=1;
		else if (f4==0 && str[i]>=48 && str[i]<58)
		     f4=1;
		else 
		     f5=1;
		i++;
	}
	
	cout<<i<<" "<<f1<< " "<<f2<<" "<<f3<<" "<<f4<< " "<<f5<<endl;
	if((i>=8) && f1 && f2&& f3 && f4&& f5)
//	if(f1==1 &&f2==1 && f3==1 && f4==1 && f5==1)
	 cout<<"valid";
   else 
	 cout<<"invalid";
}
