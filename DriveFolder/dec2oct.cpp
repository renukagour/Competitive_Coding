//Code Developed by TensorPlus Training Institute, Ichalkaranji.
#include<iostream>

using namespace std;

int main()
{
	int Dec, c,i;
	string  Oct;

	cin >> Dec;
	c = 0;
	while(Dec)
	{
		Oct[c] = (Dec % 8) + 48;
		Dec = Dec / 8;
		c++;
	}

	for(i=c-1;i>=0;i--)
		cout << Oct[i];

	cout << endl;
	return 0;
}
