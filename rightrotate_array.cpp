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
        int t = a[n - 1];
        for (i = (n - 2); i >= 0; i--)
        {
            a[i + 1] = a[i];
        }
        a[0] = t;
    }
    for (i = 0; i < n; i++)
        cout << a[i] << "\t";
}