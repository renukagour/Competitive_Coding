/*Numbered Cards
You have a pack of 5 randomly numbered cards, which can range from 0-9.
You can win if you can produce a higher two-digit number from your cards than your opponent.
Return true if your cards win that round.


Worked Example
[2, 5, 2, 6, 9], [3, 7, 3, 1, 2]) -> true
// Your cards can make the number 96
// Your opponent can make the number 73
// You win the round since 96 > 73
 */


#include<iostream>

using namespace std;

int main()
{
    int A[5],B[5],i,j;
    for(i=0;i<5;i++)
        cin >> A[i];
    for(i=0;i<5;i++)
        cin >> B[i];

    for(j=1;j<=2;j++) // two iterations of bubble sort because we need highest two numbers
    {
        for(i=0;i<(5-j);i++)
        {
            if(A[i]>A[i+1])
            {
                A[i] = A[i] ^ A[i+1];
                A[i+1] = A[i] ^ A[i+1];
                A[i] = A[i] ^ A[i+1];
            }

            if(B[i]>B[i+1])
            {
                B[i] = B[i] ^ B[i+1];
                B[i+1] = B[i] ^ B[i+1];
                B[i] = B[i] ^ B[i+1];
            }
        }
    }

    if(A[4]*10+A[3] > B[4]*10+A[3]) // two digit numbers from last two highest numbers of each array
        cout << "True" << endl;
    else
        cout << "False" << endl;


    return 0;
}
