#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10], i;
    int n;
    cin >> n;
    int r;
    cout << "enter no. of rotations";
    cin >> r;
    
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (int j = 0; j < r; j++)
    {
        int t = a[0];
        for (i = 1; i <=(n-1); i++)
        {
            a[i - 1] = a[i];
        }
        a[n-1] = t;
    }
    for (i = 0; i < n; i++)
        cout << a[i] << "\t";
}



