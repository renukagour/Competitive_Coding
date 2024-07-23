#include<iostream>

using namespace std;

int main()
{
    int N,MaxIndex, K, A[100], i, j,sum = 0;
    cin >> N >> K;
    for(i=0;i<N;i++)
        cin >> A[i];

    for(j=0;j<K;j++)
    {
        MaxIndex = 0;
        for(i=1;i<N;i++)
            if(A[i]>A[MaxIndex])
                MaxIndex = i;

        A[MaxIndex] = A[MaxIndex] / 2;
    }
    for(i=0;i<N;i++)
        sum = sum + A[i];
    cout << sum << endl;
    return 0;
}
