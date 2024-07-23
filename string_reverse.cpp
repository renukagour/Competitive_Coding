#include<iostream>
using namespace std;
int main(){
	string str;
	cin>>str;
	int i,j,k=0;
	while(str[k]!=0)
	    k++;
	i = 0;
    j = k-1;
  
		
	 
    while (i < j)
    {
       str[i] = str[i] ^ str[j];
        str[j] = str[i] ^ str[j];
        str[i] = str[i] ^ str[j];
       i++;
       j--;
    }
    
   cout<<"reverse string "<<str;
		
	}


