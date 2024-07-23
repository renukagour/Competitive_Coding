#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n,i;
    string a,b,c;
    cin >> n;
    cin >> a;
    cin >> b;
    cin >> c;
    i=0;
    while(i<n)
    {
        string t;
        t= t+a[i]+b[i]+c[i]+a[i+1]+b[i+1]+c[i+1]+a[i+2]+b[i+2]+c[i+2];
        if(a[i]=='#'&&b[i]=='#'&&c[i]=='#')
        {
            cout << "#";
            i++;
        }
        else if(t.compare(".****..**")==0)
        {
            cout << "A";
            i=i+3;
        }
        else if(t.compare("*********")==0)
        {
            cout << "E";
            i=i+3;
        }
        else if(t.compare("*.*****.*")==0)
        {
            cout << "I";
            i=i+3;
        }
        else if(t.compare("****.****")==0)
        {
            cout << "O";
            i=i+3;
        }
        else if(t.compare("***..****")==0)
        {
            cout << "U";
            i=i+3;
        }
        else
            i++;

    }
    return 0;
}
