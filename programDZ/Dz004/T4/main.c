
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int g=1;
    int p;
    int n;
    printf("Ведите Числа: ");
    scanf("%d", &n);
    for(int i=1; i<=n; ++i)
    {
        printf("Водите числа: ");
        scanf("%d", &p);
        g=g*p;
        printf("%d*%d=%d\n", n, p, g);

    }

    return 0;
}
