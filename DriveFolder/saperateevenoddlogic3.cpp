//saperate even and odd numbers in an array (Logic 3 - without 2 extra arrays, keeping sequence)
#include<iostream>

using namespace std;

int main()
{
    int A[100], N, i,j, t, ec = 0;

    cin >> N;
    for(i=0;i<N;i++)
        cin >> A[i];

    for(i=0;i<N;i++)
    {
        if(A[i] % 2 == 0)   //even  another condition (A[i] & 1 == 0)
        {
            t = A[i];
            for(j=i-1;j>=ec;j--)
                A[j+1] = A[j];
            A[ec] = t;
            ec++;
        }
    }

    cout << "New Array - " << endl;
    for(i=0;i<N;i++)
        cout << A[i] << endl;

    return 0;
}
