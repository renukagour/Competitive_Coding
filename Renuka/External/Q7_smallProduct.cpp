#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int sum;
	cin>>sum;
	
	int minindex = 0;
	for (int i = 1; i < n; i ++)
	{
		if (a[i] < a[minindex])
			minindex = i;
	}
	int a1= a[minindex] ;
	a[minindex]=~(1<<31);
	minindex = 0;
	for (int i = 0; i < n; i ++)
	{
		if (a[i] < a[minindex])
			minindex = i;
	}
	int a2=a[minindex] ;
	if((a1+a2)<=sum)
		cout<<a1*a2<<endl;
	else
	cout<<"0"<<endl;
}

