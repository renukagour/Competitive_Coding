#include <iostream>
using namespace std;
int main()
{
    int a[5] = {2, 2, 3, 3, 5};
    int x=a[0];
    for (int i = 1; i <5; i++)
    {
        x=x^a[i];
    }
    cout<<x;
}