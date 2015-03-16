#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int p;
    int e=1;
    int a=1;
    printf("x: ");
    scanf("%d", &x);
    printf("p: ");
    scanf("%d", &p);

    while(a<=p)
    {

        e*=x;
        a+=1;
    }

    printf("%d^%d=%d\n",x,p, e);

    return 0;
}

