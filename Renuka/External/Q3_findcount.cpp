#include <iostream>
using namespace std;
int findcount(int arr[], int length, int num, int diff);
int main()
{
	int l, num, diff;
	cin >> l;
	int arr[l];
	for (int i = 0; i < l; i++)
		cin >> arr[i];
	cin >> num;
	cin >> diff;
	int c = findcount(arr, l, num, diff);
	cout << c << endl;
}
int findcount(int arr[], int length, int num, int diff)
{
	int count = 0;
	int n1 = num + diff;
	int n2 = num - diff;
	for (int i = 0; i < length; i++)
	{
		if (arr[i] >= n2 && arr[i] <= n1)
		{
			count++;
		}
	
	}
		return count;
}
