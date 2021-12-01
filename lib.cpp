#include "lib.h"
bool primo(int n, int i) 
{
    if(n==2)
    {
        return true;
    }
    if(n==1)
    {
        return false;
    }
    if (n % i == 0)
    {
        return false;
    } else
    {
        i++;
        if (i == n) 
        {
            return true;
        } else 
        {
            primo(n, i);
        }
    }
}
