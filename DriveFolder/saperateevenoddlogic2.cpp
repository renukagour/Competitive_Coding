//saperate even and odd numbers in an array (Logic 2 - without 2 extra arrays)
#include<iostream>

using namespace std;

int main()
{
    int A[100], N, i, ec = 0;

    cin >> N;
    for(i=0;i<N;i++)
        cin >> A[i];

    for(i=0;i<N;i++)
    {
        if(A[i] % 2 == 0)   //even  another condition (A[i] & 1 == 0)
        {
            A[i] = A[i] ^ A[ec];
            A[ec] = A[i] ^ A[ec];
            A[i] = A[i] ^ A[ec];
            ec++;
        }
    }

    cout << "New Array - " << endl;
    for(i=0;i<N;i++)
        cout << A[i] << endl;

    return 0;
}
