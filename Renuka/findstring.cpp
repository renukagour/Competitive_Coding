#include <iostream>
using namespace std;
int main()
{
    string str1, str2;
    cin >> str1;
    cout << endl;
    cin >> str2;
    int i = 0, j = 0,pos;
    while (str1[i] != '\0')
    {
        if (str1[i] == str2[j])
        {
            pos=i;
            while (str2[j] != '\0')
            {
                
                if(str1[i]!=str2[j]){
                    j=0;
                    i=pos;
                    break;
                }
                i++;
                j++;
            }
            if(str2[j]=='\0'){
                cout<<"string is present at "<<pos+1<<endl;
                break;
            }
        }
        i++;
    }
    if(j==0)
     cout<<"string is not present "<<endl;
}
