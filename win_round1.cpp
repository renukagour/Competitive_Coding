#include <iostream>
using namespace std;

int main()
{
    int n, a[5], b[5], i, j;

    for (i = 0; i < 5; i++)
        cin >> a[i];
    cout << "enter 2nd ";
    for (i = 0; i < 5; i++)
        cin >> b[i];

    for (j = 1; j <= 2; j++)
    {
        for (i = 0; i < (5 - j); i++)
        {
            if (a[i] > a[i + 1])
            {
                a[i] = a[i] ^ a[i + 1];
                a[i + 1] = a[i] ^ a[i + 1];
                a[i] = a[i] ^ a[i + 1];
            }

            if (b[i] > b[i + 1])
            {
                b[i] = b[i] ^ b[i + 1];
                b[i + 1] = b[i] ^ b[i + 1];
                b[i] = b[i] ^ b[i + 1];
            }
        }
    }
    for (i = 0; i < 5; i++)
        cout << a[i] << "\t";
    cout << endl;
    cout << "nth  largest number " << a[3] << a[4] << endl;

    for (i = 0; i < 5; i++)
        cout << b[i] << "\t";
    cout << endl
         << "nth  largest number " << b[3] << b[4] << endl;

    cout << a[4] * 10 + a[3]<<endl;;
    cout << b[4] * 10 + b[3]<<endl;;
    int mynum = a[4] * 10 + a[3];
    int hisnum = b[4] * 10 + b[3];
    if (mynum > hisnum)
    {
        cout << "true";
    }
    else
        cout << "false";
}
