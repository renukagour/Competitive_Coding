#include <iostream>
using namespace std;
int main()
{

    int i, n, x ;
    cout<<"enter size";
    cin >> n;
    int a[n];

for(x=0;x<n;x++){
    cin>>a[x];
}
    for (int x = 0; x <= n; x++)
    {
        for (i = 2; i <= (a[x] / 2); i++)
        {
            if (a[x] % i == 0)
            {

              
                break;
            }
        }

     if (i==(a[x]/2+1))
        {

            cout << "prime " << a[x] << endl;
        }
    }

    return 0;
}
