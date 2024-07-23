#include <iostream>
using namespace std;
int isprime(int n);
int main()
{

    int i, n, x ;
    cout<<"enter size";
    cin >> n;
    int a[n];

for(x=0;x<n;x++){
    cin>>a[x];
}
    for (int x = 0; x < n; x++)
    {
        if(isprime(a[x])){
        	cout<<a[x]<<endl;
		}
         
    }

    return 0;
}
int isprime(int n){
    int i;
    for (i = 2; i <= (n/ 2); i++)
        {
            if (n % i == 0)
            {
              return 0;
            }
        }

     return 1;
}
