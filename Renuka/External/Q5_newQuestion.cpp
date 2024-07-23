#include <iostream>
using namespace std;
int diff(int n, int m);
int main()
{
	int n, m;//4 20
	cin >> n >> m;
	if (n > 0 && m > 0)
	{
		int res = diff(n, m);
		cout << res << endl;//90
	}
}

int diff(int n, int m)
{
	int diff,wsum,dsum;
	int x=m/n; //number of numbers divisble by n
	wsum=m*(m+1)/2; //1-20 sum 1-m sum
	dsum=n*x*(x+1)/2; //sum of divisible by n
	diff=wsum-(2*dsum); //1-20 - /4 -/4 
	return diff;
}
