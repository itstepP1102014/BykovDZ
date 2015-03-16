#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int p;
    int a;
    printf("x: ");
    scanf("%d", &x);
    printf("p: ");
    scanf("%d", &p);

    while(a>=p)
    {
        a+=1;
        x*=x;

        printf("a=%d\n", a);
    }
    printf("x=%d\n", x);
    printf("p=%d\n", p);



    return 0;
}
