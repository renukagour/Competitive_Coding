//Convert vowels to Uppercase and rest all to lower case
#include<iostream>

using namespace std;

int main()
{
    int i;
    char c;
    string str;

    cin >> str;

    i = 0;
    while(str[i] != '\0')
    {
        c = str[i] | 32;  // converted to lower case
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            str[i] = c & ~32; // Upper case conversion
        else
            str[i] = c; //store lowercase version
        i++;
    }
    cout << str << endl;

    return 0;
}
