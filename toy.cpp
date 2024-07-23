#include<iostream>
#include<math.h>>
using namespace std;
int main(){
	int w,b,c;
	cin>>w>>b>>c;
	w=w/4;
	b=b/1;
	c=c/2;
	if(w<b && w<c)
	  cout<<w;
	else if(b<w && b<c)
	  cout<<b;
	else
	  cout<<c;
	  
	//or
	cout<<endl<<(w<b?(w<c?w:c):(b<c?b:c));
	//or
//	int n=0;
//	while(w>=4 && b>=1 && c>=2){
//		w=w-4;
//		b=b-1;
//		c=c-2;
//		n++;
//	}
//	cout<<endl<<n;
}