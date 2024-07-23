#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n=156,sum=0,num=0,i,num1=0;
    // int d;
    // while(n>0){
    // d=n%10;
    // num=num*10+d;
    // n=n/10;
    // cout<<d<<endl;
    // sum=sum+d;
    // }
    // cout<<sum<<endl;
    // cout<<num;
    
    int d[100];
    while(n>0){
    d[i]=n%10;
    
    n=n/10;
    cout<<d[i]<<endl;
    
    }
  for(int j=0;j<i;j++){
       num1=num1+(pow(10,i-j-1)*d[j]);
  }
  cout<<num1;
}