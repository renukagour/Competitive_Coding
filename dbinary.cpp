#include<iostream>
using namespace std;
int main(){
    int n,sum=0,num=0,i=0;
    cin>>n;
    int d[100];

    while(n){
    d[i]=n%2;
    i++;
    n=n/2;
    
    }
    i--; //for setting correct
    while(i>=0){
        cout<<d[i];
        i--;
    }
    cout<<endl;
   
   
}