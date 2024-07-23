#include<iostream>

using namespace std;

int main()
{
    int N, i;
    cin >> N;

    for(i=2;i<=(N/2);i++)
    {
        if(N % i == 0)
        {
            cout << "Not Prime" << endl;
            break;
        }
    }
    if(i==(N/2+1))
        cout << "Prime" << endl;

    return 0;
}
