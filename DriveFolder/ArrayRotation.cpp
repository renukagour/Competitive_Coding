//Array Rotation
//take rotation count and rotate right for count times

#include<iostream>

using namespace std;

int main()
{
    int A[100], N, i, t, R, j;
    cin >> N;
    for(i=0;i<N;i++)
        cin >> A[i];

    cin >> R;

    for(j=0;j<R;j++)
    {
        t = A[N-1];
        for(i=N-2;i>=0;i--)
            A[i+1] = A[i];
        A[0] = t;
    }

    for(i=0;i<N;i++)
        cout << A[i] << endl;

    return 0;
}
