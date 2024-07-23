#include<iostream>
using namespace std;
int main(){
  
  int i,n,sum=0;
  
  for(int x=2;x<=100;x++){
  	
  for(i=2;i<=(x/2);i++){
                 if(x%i==0){
//                  cout<<"not prime"<<j<<endl;
                    break;
				 }
     }
  
    if(i==(x/2)+1){
  	         sum+=n;//sum of prime
             cout<<"prime "<<n<<endl;
    }
  }
  cout<<"sum "<<sum<<endl;
  return 0;
}
