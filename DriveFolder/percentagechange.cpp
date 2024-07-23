/*Percentage Changed
Create a function that takes an old price oldPrice, a new price newPrice, and returns what percent the price decreased or increased. Round the percentage to the nearest whole percent.
Examples
percentageChanged("$800", "$600") -> "25% decrease"


percentageChanged("$1000", "$840") -> "16% decrease"


percentageChanged("$100", "$950") -> "850% increase" */

//Logic 1 without using strings (simplified version)

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int oldP, newP, per;

    cin >> oldP >> newP;

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
