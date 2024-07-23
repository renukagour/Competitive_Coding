//Code Developed by TensorPlus Training Institute, Ichalkaranji.
#include<iostream>

using namespace std;

int main()
{
	int Dec, c,i;
	string Hex;

	cin >> Dec;
	c = 0;
	while(Dec)
	{
		int temp = Dec % 16;
		Hex[c] = (temp < 10)? temp + 48 : temp + 55;
		Dec = Dec / 16;
		c++;
	}

	for(i=c-1;i>=0;i--)
		cout << Hex[i];

	cout << endl;
	return 0;
}
