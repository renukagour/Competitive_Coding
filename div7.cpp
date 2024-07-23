#include<iostream>
using namespace std;
int main(){
    int a,b,i;
    cin>>a>>b;
i=a;
    while(i%7!=0){
i++;
    }
    while(i<=b){
    cout<<i<<endl;
    i+=7;
    }

}