//Code Developed by TensorPlus Training Institute, Ichalkaranji.
#include<iostream>

using namespace std;

int main()
{
	int Dec = 0,i;
	string Hex;

	cin >> Hex;

	i = 0;
	while(Hex[i]!='\0')
	{
		Dec = Dec * 16 + ((Hex[i] >= 65) ? Hex[i]-55 : Hex[i]-48);
		i++;
	}

	cout << Dec << endl;

	return 0;
}
