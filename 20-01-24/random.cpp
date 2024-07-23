#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
int main(){
	int x;
	for(int i=1;i<=5;i++){

       	x = rand()%20; //limit
	    cout<<x<<endl;
		}
		
	for(int i=1;i<=5;i++){

       	x = rand(); //for any random
	    cout<<x<<endl;
		}
}
