#include <iostream>
using namespace std;
int main()
{
    int a[5] = {2, 2, 3, 3, 5};
    for (int i = 0; i < 5; i++)
    {
        if (!(a[i] ^ a[i + 1]))
        {
           
        
        }
       else{
  cout << a[i]; 
       }
          
    }
}