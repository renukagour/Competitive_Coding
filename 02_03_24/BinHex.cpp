#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string bin, hex;
    cin >> bin;
    int len = bin.length() % 4;
    // cout<<bin.length();
    // bin.append('0');
    int i, a = 0, b = 0, c = 0, d = 0, x, j = 0;
    for (i = 0; i <= bin.length(); i += 4)
    {
        a = bin[i];
        b = bin[i + 1];
        c = bin[i + 2];
        d = bin[i + 3];
        x = a * 8 + b * 4 + c * 2 + d * 1;
        if (x > 9)
            hex[j] = (x + 55);
        else
            hex[j] = x + 48;
        j++;
    }
    hex[j] = '\0';
    cout << hex << endl;
}
