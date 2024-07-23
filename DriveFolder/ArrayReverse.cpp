//Array Reverse

#include<iostream>

using namespace std;

int main()
{
    int A[100], N, i, j;
    cin >> N;
    for(i=0;i<N;i++)
        cin >> A[i];

    i=0;
    j=N-1;
    while(i<j)
    {
        A[i] = A[i] ^ A[j];
        A[j] = A[i] ^ A[j];
        A[i] = A[i] ^ A[j];

        i++;
        j--;
    }

    for(i=0;i<N;i++)
        cout << A[i] << endl;

    return 0;
}
