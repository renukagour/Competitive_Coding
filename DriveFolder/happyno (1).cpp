#include<iostream>

using namespace std;

int main()
{
    int n,k,i,j,A[100],H[100]={0};
    cin >> n >> k;
    for(i=0;i<n;i++)
        cin >> A[i];

    for(i=0;i<n;i++)
    {
        if(H[i]==0)
        {
            for(j=i+1;j<n;j++)
            {
                if((A[i]+k)>=A[j] && A[j]>=(A[i]-k))
                {
                    H[i] = 1;
                    H[j] = 1;
                }
            }
        }
    }

    for(i=0;i<n;i++)
    {
        cout << A[i] << " - " << H[i] << endl;
    }

    return 0;
}
