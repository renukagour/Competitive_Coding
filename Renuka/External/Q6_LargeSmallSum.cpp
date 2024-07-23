#include <iostream>
using namespace std;
int LargeSmallSum(int arr[], int n);
int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int r = LargeSmallSum(a, n);
	cout << r << endl;
}
int LargeSmallSum(int a[], int n)
{
	int maxindex = 0, i;

	for (i = 2; i < n; i += 2)
	{
		if (a[i] > a[maxindex])
			maxindex = i;
	}
	a[maxindex] = 0;
	maxindex = 0;
	for (i = 2; i < n; i += 2)
	{
		if (a[i] > a[maxindex])
			maxindex = i;
	}
	cout << a[maxindex] << endl;
	int minindex = 1;
	for (i = 3; i < n; i += 2)
	{
		if (a[i] < a[minindex])
			minindex = i;
	}
	a[minindex] = 999;
	minindex = 1;
	for (i = 3; i < n; i += 2)
	{
		if (a[i] < a[minindex])
			minindex = i;
	}
	cout << a[minindex] << endl;
	return a[maxindex] + a[minindex];
}
