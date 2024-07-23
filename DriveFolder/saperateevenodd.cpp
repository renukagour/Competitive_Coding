//saperate even and odd numbers in an array (Logic 1 - with 2 extra arrays)
#include<iostream>

using namespace std;

int main()
{
    int A[100], Even[100], Odd[100], N, i, j , ec = 0, oc = 0;

    cin >> N;
    for(i=0;i<N;i++)
        cin >> A[i];

    for(i=0;i<N;i++)
    {
        if(A[i] % 2 == 0)   //even  another condition (A[i] & 1 == 0)
        {
            Even[ec] = A[i];
            ec++;
        }
        else                //odd
        {
            Odd[oc] = A[i];
            oc++;
        }
    }

    for(i=0;i<ec;i++)
        A[i] = Even[i];
    for(i=0;i<oc;i++)
        A[i+ec] = Odd[i];

    cout << "New Array - " << endl;
    for(i=0;i<N;i++)
        cout << A[i] << endl;

    return 0;
}
