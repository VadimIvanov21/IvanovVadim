#include <iostream>
#include "easy2.h"

double itc_pow(int num, int step)
{
    double temp = double(num);
    if(step>0)
    {
        for (int i = 1; i<step; i++)
        {
            temp=temp*double(num);
        }
        return temp;
    }
    else if (step==0)
    {
        return 1;
    }
    else
    {
        for (int i = -1; i>step; i--)
        {
            temp=temp*double(num);
        }
        return 1/temp;
    }
}


bool itc_inpositive(int num)
{
    if(num>=0)
    {
        return true;
    }
    return false;
}

bool itc_inpositive_d(int num)
{
    if(num>=0)
    {
        return true;
    }
    return false;
}
