#include <iostream>

using namespace std;

int main()
{
    int n[4] = {0,0,0,0},len, i,x, extra, bcount = 0, hcount = 0;
    string bin;
    cin >> bin;
    len = bin.size();
    extra = len % 4;
    string hex(len/4 + (extra || 0), '0');
    if(extra)
    {
        for(i=4-extra;i<=3;i++)
        {
            n[i] = bin[bcount]-48;
            bcount++;
        }
        x = n[0]*8 + n[1]*4 + n[2]*2 + n[3]*1;
        if(x>9)
            hex[hcount] = x + 55;
        else
            hex[hcount] = x + 48;
        hcount++;
    }
    while(bin[bcount] != '\0')
    {
        for(i=0;i<4;i++)
        {
            n[i] = bin[bcount]-48;
            bcount++;
        }
        x = n[0]*8 + n[1]*4 + n[2]*2 + n[3]*1;
        if(x>9)
            hex[hcount] = x + 55;
        else
            hex[hcount] = x + 48;
        hcount++;
    }
    cout << hex << endl;
    return 0;
}
