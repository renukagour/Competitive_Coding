#include<iostream>

using namespace std;

int main()
{
    int i, a, b,flag=1;
    string str;

    cin >> str;

    i = 0;
    while(str[i] != '\0')
        i++;

    a = 0;
    b = i-1;
    while(a<b)
    {
        if(str[a] != str[b])
        {
            flag = 0;
            break;
        }

        a++;
        b--;
    }

    if(flag)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}
