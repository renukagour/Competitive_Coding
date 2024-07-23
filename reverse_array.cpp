#include <iostream>
using namespace std;
int main()
{
    int n, a[10], i;
    cin >> n;
    int j;
    for (i = 0; i < n; i++)
        cin >> a[i];
    i = 0;
    j = n - 1;
    while (i < j)
    {
        /* code */
        a[i] = a[i] ^ a[j];
        a[j] = a[i] ^ a[j];
        a[i] = a[i] ^ a[j];
        i++;
        j--;
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    return 0;
}