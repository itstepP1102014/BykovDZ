#include <stdio.h>
#include <stdlib.h>

// Variant I
/*
int main()
{
    for(int i=1; i<=33; ++i)
    {
        if(i%2==1)
        {
            printf("%d --- %d\n",i,i*i*i);
        }
    }
    return 0;
}
//*/

// Variant II
/*
int main()
{
    for(int i = 1; i <= 33; i = i + 2)
    {
        printf("%d --- %d\n", i, i*i*i);
    }
    return 0;
}
//*/

// Variant III
//*
int main()
{
    for(int i = 1, x = 1; i <= 17; ++i, x = x + 2)
    {
        printf("%d --- %d\n", x, x*x*x);
    }
    return 0;
}
//*/
