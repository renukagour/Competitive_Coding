#include<iostream>
using namespace std;
int main(){
	string str;
	cin>>str;
	int i,j,f=0,f1=1;
	i = 0;
    j = str.size()-1;
  
		
	 
    while (i < j)
    {
        /* code */
//        if(str[i]==str[j]){
//        	  i++;
//              j--;
//		}
//		else
//		 break;
//        f=1;

  //or
         if(str[i]!=str[j]){
        	f1=0;
        	break;
         }
       i++;
       j--;
    }
    
    if(f1)
     cout<<"palin";
     else
      cout<<"not palin";
		
	}


