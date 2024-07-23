#include<iostream>
using namespace std;
int main(){
	int a[26]={0};
	char c;
	string str;
	cin>>str;
	int i=0;
	while(str[i]!='\0'){
		a[str[i]-97]++;
		i++;
	}
	int j;
	for(j=0;j<26;j++){
		if(a[j]!=0){
			
			c=j+97;//print char also
		    cout<<c<<"-"<<a[j]<<endl;;
		}
	
	}
}
