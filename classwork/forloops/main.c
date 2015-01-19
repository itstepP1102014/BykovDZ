#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0;
    while(a<=21)
    {
        int x;
        printf("Vvedi: ");
        scanf("%d", &x);
        a=a+x;
        printf("score: %d\n", a);
    }


    return 0;
}
