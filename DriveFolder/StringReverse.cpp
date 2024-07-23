//String Reverse

#include<iostream>

using namespace std;

int main()
{
    int i, a, b;
    string str;

    cin >> str;

    i = 0;
    while(str[i] != '\0')
        i++;

    a = 0;
    b = i-1;
    while(a<b)
    {
        str[a] = str[a] ^ str[b];
        str[b] = str[a] ^ str[b];
        str[a] = str[a] ^ str[b];

        a++;
        b--;
    }

    cout << str << endl;

    return 0;
}
