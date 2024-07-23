#include<iostream>

using namespace std;

int main()
{
    int i;
    string str;

    cin >> str;

    i = 0;
    while(str[i] != '\0')
    {
        str[i] = str[i] & ~32;
        i++;
    }
    cout << str << endl;

    return 0;
}
