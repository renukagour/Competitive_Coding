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
        c = str[i];
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            Vc++;
        i++;
    }
    cout << "No of Vowels - " << Vc << endl;

    return 0;
}
