#include<iostream>

using namespace std;

int main()
{
    int i,Vc = 0;
    char c;
    string str;

    cin >> str;

    i = 0;
    while(str[i] != '\0')
    {
        c = str[i] | 32;  // converted to lower case
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            Vc++;
        i++;
    }
    cout << "No of Vowels - " << Vc << endl;

    return 0;
}
