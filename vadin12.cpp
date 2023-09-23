#include <iostream>
#include "easy2.h"

int itc_sqrt(int a)
{
    if (a<0)
    {
        return -1;
    }
    if (a==0)
    {
        return 0;
    }
    for (long long i = 0; i*i<=a; i++)
    {
        if(a-i*i==0)
        {
            return i;
        }
    }
    return -1;
}

int itc_skv(int a)
{
    if (a>0)
    {
        return a*a;
    }
    return -1;
}

int itc_spr(int a, int b)
{
    if(a>0 && b>0)
    {
        return a*b;
    }
    return -1;
}

int itc_str(int a, int b, int c)
{
    if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a)
    {
        float d=(a+b+c)/2.0;
        return itc_sqrt(d*(d-a)*(d-b)*(d-c));
    }
    return -1;
}

double itc_scir(int a)
{
    if(a>=0)
    {
        return 3.14*double(a)*double(a);
    }
    return double(-1);
}
