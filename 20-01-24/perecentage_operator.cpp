#include<iostream>
using namespace std;
class Perc{
	public:
		float sum,total;
		float operator % (Perc p);
//		{
//			return (sum/p.total)*100;
//		}
};

float Perc :: operator % (Perc p1 ){
	
	return (p1.sum/p1.total)*100;
}
int main(){
	Perc p1,p2;
	p1.sum=50;
	p1.total=200;
	cout<<p2%p1;
}
