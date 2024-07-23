/*Percentage Changed
Create a function that takes an old price oldPrice, a new price newPrice, and returns what percent the price decreased or increased. Round the percentage to the nearest whole percent.
Examples
percentageChanged("$800", "$600") -> "25% decrease"


percentageChanged("$1000", "$840") -> "16% decrease"


percentageChanged("$100", "$950") -> "850% increase" */

//Logic 2 using strings

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    string str1,str2;
    int oldP = 0, newP = 0, i, per;

    cin >> str1 >> str2;

    i = 1; // first character is $ sign so skip it
    while(str1[i] != '\0')
    {
        oldP = oldP * 10 + str1[i] - 48;
        i++;
    }

    i = 1; // first character is $ sign so skip it
    while(str2[i] != '\0')
    {
        newP = newP * 10 + str2[i] - 48;
        i++;
    }
    if(newP == oldP)
        cout << "No change" << endl;
    else if(newP > oldP)
    {
        per = round((float)(newP-oldP)/oldP * 100);
        cout << per << "% increase" << endl;
    }
    else
    {
        per = round((float)(oldP-newP)/oldP * 100);
        cout << per << "% decrease" << endl;
    }
        return 0;
}
