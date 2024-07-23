#include <iostream>
using namespace std;
int main()
{
    int n, a[10], even[10], odd[10], e = 0, o = 0, i, ec = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even[e++] = a[i];
        }
        else
        {
            odd[o++] = a[i];
        }
    }
    cout << e << " " << o << endl;
    // 1st mwthod for printing even at left side and odd at right side
    for (i = 0; i < e; i++)
    {
        cout << even[i] << " ";
        // a[i] = even[i];
    }
    cout << endl;
    for (i = 0; i < o; i++)
    {
        cout << odd[i] << " ";
        // a[i + e] = odd[i];
    }

    cout << endl;
    // for (i = 0; i < n; i++)
    // {
    //     cout << a[i];
    // }

    // for (i = 1; i <n; i++)
    // {
    //     if (a[i] % 2 == 0)
    //     {
    //         a[i] = a[i] ^ a[ec];
    //         a[ec] = a[i] ^ a[ec];
    //         a[i] = a[i] ^ a[ec];
    //         ec++;
    //     }
    // }

    // for (i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }

    //for sorted order

for (i = 1; i <n; i++)
    {
        if (a[i] % 2 == 0)
        {
            
            int t=a[i];
            for(int j=(i-1);j>=ec;j--){
                a[j+1]=a[j];
            }
            a[ec]=t;
            ec++;
        }
    }

  for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

}

