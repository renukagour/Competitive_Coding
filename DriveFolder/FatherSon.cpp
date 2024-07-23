/*Create a program that takes two values.
a father's current age fAge and his son's current age sAge.
Сalculate how many years ago the father was twice as old as his son,
or in how many years he will be twice as old.


Examples
36, 7 -> after 22 years
// 22 years from now, the father will be 58 years old and his son will be 29 years old.


55, 30 -> before 5 years
// 5 years ago, the father was 50 years old and his son was 25 years old.


42, 21 -> present*/

#include<iostream>

using namespace std;

int main()
{
    int fAge, sAge, diff;
    cin >> fAge >> sAge;

    if(fAge == sAge*2)
        cout << "Present" << endl;
    else
    {
        diff = fAge - sAge;
        if(diff > sAge)
            cout << "After " << diff - sAge << " Years" << endl;
        else
            cout << "Before " << sAge - diff << " Years" << endl;
    }
}
