#include <iostream>
using namespace std;
int main()
{
    int l, b, m, i = 0;
    cin >> l >> b;
    while (l != b)
    {
        if(l>b){
        m = l - b;
        l = m;
        i++;
        }
        else{
           m = b - l;
        b = m;
        i++;   
        }

    }
    cout << i+1;
}