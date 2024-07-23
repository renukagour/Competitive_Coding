//Code Developed by TensorPlus Training Institute, Ichalkaranji.
#include<iostream>

using namespace std;

int main()
{
	int Dec = 0,i;
	string Oct;

	cin >> Oct;

	i = 0;
	while(Oct[i]!='\0')
	{
		Dec = Dec * 8 + Oct[i]-48;
		i++;
	}

	cout << Dec << endl;

	return 0;
}
