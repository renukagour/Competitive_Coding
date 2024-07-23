//Code Developed by TensorPlus Training Institute, Ichalkaranji.
#include<iostream>

using namespace std;

int main()
{
	int Dec = 0, count,i;
	string Bin;

	cin >> Bin;

	i = 0;
	while(Bin[i]!='\0')
	{
		Dec = Dec * 2 + Bin[i]-48;
		i++;
	}

	cout << Dec << endl;

	return 0;
}
