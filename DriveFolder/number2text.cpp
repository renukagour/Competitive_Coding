#include<iostream>

using namespace std;

void D2text(int );
void D1text(int );

int main()
{
    int num,x;
    cin >> num;

    x = num/10000000;
    if(x)
    {
        D2text(x);
        if(x>1)
            cout << " crores, ";
        else
            cout << " crore, ";
    }

    x = (num%10000000)/100000;
    if(x)
    {
        D2text(x);
        if(x>1)
            cout << " lacs, ";
        else
            cout << " lac, ";
    }

    x = (num%100000)/1000;
    if(x)
    {
        D2text(x);
        if(x>1)
            cout << " thousands, ";
        else
            cout << " thousand, ";
    }

    x = (num%1000)/100;
    if(x)
    {
        D1text(x);
        cout << " hundred, ";
    }

    x = (num%100);
    if(x)
        D2text(x);

    return 0;
}

void D2text(int n)
{
    if(n == 0)
        return;
    else if(n<10)
        D1text(n);
    else if(n>9 && n<20)
    {
        switch(n)
        {
            case 10: cout << "ten"; break;
            case 11: cout << "eleven"; break;
            case 12: cout << "twelve"; break;
            case 13: cout << "thirteen"; break;
            case 14: cout << "forteen"; break;
            case 15: cout << "fifteen"; break;
            case 16: cout << "sixteen"; break;
            case 17: cout << "seventeen"; break;
            case 18: cout << "eighteen"; break;
            case 19: cout << "nineteen"; break;
        }
    }
    else
    {
        int a,b;
        a = n/10;
        b = n % 10;
        switch(a)
        {
            case 2: cout << "twenty"; break;
            case 3: cout << "thirty"; break;
            case 4: cout << "forty"; break;
            case 5: cout << "fifty"; break;
            case 6: cout << "sixty"; break;
            case 7: cout << "seventy"; break;
            case 8: cout << "eighty"; break;
            case 9: cout << "ninty"; break;
        }
        cout << " ";
        D1text(b);
    }
}

void D1text(int x)
{
    if(x==0)
        return;
    switch(x)
    {
        case 1: cout << "one"; break;
        case 2: cout << "two"; break;
        case 3: cout << "three"; break;
        case 4: cout << "four"; break;
        case 5: cout << "five"; break;
        case 6: cout << "six"; break;
        case 7: cout << "seven"; break;
        case 8: cout << "eight"; break;
        case 9: cout << "nine"; break;
    }
}
