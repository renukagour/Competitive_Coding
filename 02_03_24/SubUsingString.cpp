#include <iostream>

using namespace std;

int main()
{
    string n1,n2,big,small;
    int len1,i,len2,G = 0;
    cin >> n1;
    cin >> n2;
    len1 = n1.size();
    len2 = n2.size();
    if(len1>len2)
        G = 1;
    else if(len2>len1)
        G = 2;
    else
    {
        for(i=0;i<len1;i++)
        {
            if(n1[i]>n2[i])
            {
                G = 1;
                break;
            }
            else if(n2[i]>n1[i])
            {
                G = 2;
                break;
            }
        }
    }
    if(G==0)
    {
        cout << '0' << endl;
        return 0;
    }
    else if(G==1)
    {
        big = n1;
        small = n2;
    }
    else
    {
        big = n2;
        small = n1;
    }
    int sublen = big.size(),s, cy = 0;
    int cb = big.size()-1;
    int cs = small.size()-1;
    string sub(sublen,'0');
    for(i=sublen-1;i>=0;i--)
    {
        s = big[cb]-48 - (cs>=0?(small[cs]-48):0) - cy;
        if(s<0)
        {
            s = s + 10;
            cy = 1;
        }
        else
            cy = 0;
            
        sub[i] = s + 48;
        cb--;
        cs--;
    }
    
    cout << sub << endl;
    return 0;
}
