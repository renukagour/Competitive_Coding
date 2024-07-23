#include <iostream>
using namespace std;
int OperationBinaryString(string str);
int main()
{
	string x;
	cin >> x;
	int r;
	r = OperationBinaryString(x);
	cout << r << endl;
}

int OperationBinaryString(string str)
{
	int R;
	int i = 1;
	R = str[0] - 48; // store first value as result as int
	while (str[i] != '\0')
	{

		if (str[i] == 'A')
		{
			R = R & (str[i + 1] - 48);
		}
		else if (str[i] == 'B')
		{
			R = R | (str[i + 1] - 48);
		}
		else if (str[i] == 'C')
		{
			R = R ^ (str[i + 1] - 48);
		}
		i = i + 2;
	}
	return R;
}
