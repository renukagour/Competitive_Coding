/*Check entered string is a valid password or not using following conditions
It should have- 1. At least 8 characters
                2. At least 1 Upper Case Letter
                3. At least 1 Lower Case Letter
                4. At least 1 Number
                5. At least 1 Special Symbol*/


#include<iostream>

using namespace std;

int main()
{
    int i, capF=0, smF=0, numF=0, spsF=0;
    string str;
    cin >> str;

    i = 0;
    while(str[i] != '\0')
    {
        if(str[i]>=65 && str[i]<=90)
            capF = 1;
        else if(str[i]>=97 && str[i]<=122)
            smF = 1;
        else if(str[i]>=48 && str[i]<=57)
            numF = 1;
        else
            spsF = 1;
        i++;
    }
    if(i>=8 && (capF+smF+numF+spsF)==4)
        cout << "Valid" <<endl;
    else
        cout << "Invalid" <<endl;

    return 0;
}
