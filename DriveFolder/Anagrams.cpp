/*Check whether two strings are anagrams of each other*/

#include<iostream>

using namespace std;

int main()
{
    int i,j,k,sum=0,A[26] = {0};
    char c;
    string str1,str2;
    cin >> str1;
    cin >> str2;

    i = 0;
    while(str1[i] != '\0')
    {
        A[str1[i]-97]++;
        i++;
    }

    j = 0;
    while(str2[j] != '\0')
    {
        A[str2[j]-97]--;
        j++;
    }

    for(k=0;k<26;k++)
        sum = sum | A[k];

    if(i==j && sum == 0)
        cout << "Anagrams" <<endl;
    else
        cout << "Not Anagrams" <<endl;

    return 0;
}
