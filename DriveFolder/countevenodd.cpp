//count even and odd numbers in an array
#include<iostream>

using namespace std;

int main()
{
    int A[100], N, i, j , ec = 0, oc = 0;

    cin >> N;
    for(i=0;i<N;i++)
        cin >> A[i];

    for(i=0;i<N;i++)
    {
        if(A[i] % 2 == 0)   //even  another condition (A[i] & 1 == 0)
            ec++;
        else                //odd
            oc++;
    }
    cout << "Even numbers - " << ec << endl;
    cout << "Odd numbers - " << oc << endl;

    return 0;
}
