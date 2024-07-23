#include <iostream>
using namespace std;
int diff(int n, int m);
int main()
{
	int n, m;
	cin >> n >> m;
	if (n > 0 && m > 0)
	{
		int res = diff(n, m);
		cout << res << endl;
	}
}

int diff(int n, int m)
{
	int sum, s1 = 0, s2 = 0;
	for (int i = 1; i <= m; i++)
	{
		if (i % n == 0)
			s1 = s1 + i;
		else
			s2 = s2 + i;
	}
	if (s2 > s1)
		sum = s2 - s1;
	else
		sum = s1 - s2;
	return sum;
}
