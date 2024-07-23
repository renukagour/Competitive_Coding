#include<iostream>

using namespace std;

int isprime(int);

int main()
{
    int D, p,i,j, Pc = 0;
    cin >> D >> p;
    if(D % p != 0)
        cout << "Invalid Input" << endl;
    else
    {
        for(i=1;i<=(D/p);i++)
        {
            if(isprime(i))
            {
                for(j=1;j<p;j++)
                {
                    if(isprime(i+j*(D/p))==0)
                           break;
                }
                if(j==p)
                    Pc++;
            }
        }
        cout << Pc << endl;
    }

    return 0;
}

int isprime(int n)
{
    int i;
    if(i==1)
        return 0;
    for(i=2;i<=(n/2);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

















