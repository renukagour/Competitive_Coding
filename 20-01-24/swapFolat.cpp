#include<iostream>
#include<string.h>
using namespace std;
int main(){
	float a=10.2,b=20.3;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"a = "<<a<<"b = "<<b;
	
//	string str1="abc",str2="xyz";
//	string *temp;
//	strcpy(temp,str1);
//	strcpy(str2,str1);
//	cout<<str2;

 char str1[] = "Hello Geeks!";
    char str2[] = "GeeksforGeeks";
 
    char str3[40];
    char str4[40];
 
    char str5[] = "GfG";
 
    // String copy used
    strcpy(str2, str1);
    strcpy(str3, "Copy successful");
    strcpy(str4, str5);
 
    // Strings Printed
    cout << "str1: " << str1 << "\nstr2: " << str2
         << "\nstr3: " << str3 << "\nstr4: " << str4;
}
