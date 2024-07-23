#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main(){
	
	int oldp=0,newp=0;

	string str1,str2;
	cin>>str1>>str2;
	
	int i=1;
    int res;
    
    while(str1[i]!='\0'){
   	    oldp = oldp*10 + str1[i] - 48;
   	    i++;
   }
   
   i=1;

    while(str2[i]!='\0'){
   	      newp = newp*10 + str2[i] - 48;
   	      i++;
    }
    
	if(oldp<newp)
	{
		
		res=round ((float)(newp-oldp)/oldp *100);
		cout<<res<<"% increase"<<endl;
	}
	 
	else 
	{
		res=round ((float)(oldp-newp)/oldp *100);
		cout<<res<<"% decrease"<<endl;
	}
	 
	 
    

}