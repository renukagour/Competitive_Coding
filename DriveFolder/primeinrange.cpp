#include<iostream>

using namespace std;

int isprime(int);

int main()
{
    int a,b,i;

    cin >> a >> b;
    for(i=a;i<=b;i++)
    {
        if(isprime(i))
            cout << i << endl;
    }

    return 0;
}


int isprime(int N)
{
    int i;

    for(i=2;i<=(N/2);i++)
    {
        if(N % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
