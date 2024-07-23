/*Count Occurrences of each letter from a to z*/

#include<iostream>

using namespace std;

int main()
{
    int i,A[26] = {0};
    char c;
    string str;
    cin >> str;


    i = 0;
    while(str[i] != '\0')
    {
        A[str[i]-97]++;
        i++;
    }

    for(i=0;i<26;i++)
    {
        if(A[i] != 0)
        {
            c = i+97;
            cout << c << " - " << A[i] << endl;
        }
    }

    return 0;
}
