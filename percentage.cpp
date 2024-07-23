#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main(){
	int oldp,newp;
   int res;
	string change;
	cin>>oldp>>newp;
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