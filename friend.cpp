#include<iostream>
using namespace std;
class B;
class A{
int a=10;
friend void getdata(A a1,B b1);
};
class B{
    int b=20;
friend void getdata(A a1,B b1);
};
 void getdata(A a1,B b1){
    cout<<a1.a<<b1.b;
 }
int main(){
   A a1;
   B b1;
   getdata(a1,b1); 
}