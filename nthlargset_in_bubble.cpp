#include <iostream>
using namespace std;
int main()
{
    int n, a[100], i, j,N;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout<<"enter n for largest element";
    cin>>N; //nth largest element to find
    for (j = 1; j <=N; j++)
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
        cout << a[i] << "\t";
    cout<<endl<<"nth  largest number "<<a[n-N];
}