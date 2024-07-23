#include<iostream>

using namespace std;

int main()
{
    int n,a,b,i,t,p,s,A[1000],D[1000];
    cin >> n;
    for(i=0;i<n;i++)
        cin >> A[i] >> D[i];

    for(i=0;i<n;i++)
            D[i] = A[i] + D[i];

    a = A[0];
    for(i=0;i<n;i++)
        if (A[i] < a)
            a = A[i];

    b = D[0];
    for(i=0;i<n;i++)
        if (D[i] > b)
            b = D[i];
    p = 0;
    for(t=a;t<=b;t++)
    {
        s = 0;
        for(i=0;i<n;i++)
        {
            if(t>=A[i] && t<=D[i])
                s++;
        }
        if(s>p)
            p = s;
    }
    cout << p << endl;

    return 0;
}
