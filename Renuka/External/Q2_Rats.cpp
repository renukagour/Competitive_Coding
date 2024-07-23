#include <iostream>
using namespace std;
int main()
{
	int n, r, unit;
	cout << "size" << endl;
	cin >> n;

	int arr[n], i;

	cout << "array" << endl;

	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "rats" << endl;
	cin >> r;
	cout << "units" << endl;
	cin >> unit;
	int res = r * unit;
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + arr[i];
		if (sum > res)
		{
			cout << i + 1;
			break;
		}
	}
	if (i == n)
		cout << "0" << endl;
}
