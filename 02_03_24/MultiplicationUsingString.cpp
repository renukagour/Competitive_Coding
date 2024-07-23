#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cy = 0, s, i, len1, len2, lsum, c1, c2;
    string n1, n2;
    cin >> n1;
    cin >> n2;
    len1 = n1.size();
    len2 = n2.size();
    lsum = len1 > len2 ? len1 : len2 + 1;
    string sum(lsum, '0');
    c1 = len1 - 1; // index of n1 from last
    c2 = len2 - 1; // index of n2 from last

    for (i = (lsum - 1); i > 0; i--)
    {
        s = cy + ((c1 >= 0 ? (n1[c1] - 48) : 1) * (c2 >= 0 ? (n2[c2] - 48) : 1));
        sum[i] = s % 10 + 48;
        cy = s / 10; //getting carry
        c1--;
        c2--;
    }
    sum[i] = cy + 48;
    cout << sum << endl;
}