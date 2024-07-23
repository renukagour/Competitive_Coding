#include <iostream>
using namespace std;
int main()
{
    int n, a[100], i, j;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (j = 1; j < n; j++)
    {
        for (i = 0; i < (n - j); i++)
        {
            if(a[i]>a[i+1]){
            a[i] = a[i] ^ a[i + 1];
            a[i + 1] = a[i] ^ a[i + 1];
            a[i] = a[i] ^ a[i + 1];
            }
        }
    }
    for (i = 0; i < n; i++)
        cout << a[i] << "\t"<<endl;
    cout<<"third largest number "<<a[n-3];
}