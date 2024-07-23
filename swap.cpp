#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main(){
	
    int a=10;
    int b=20;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<" "<<b;

}