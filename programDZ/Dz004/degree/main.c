#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k=1;
    int i;
    int p;
    int n;
    printf("f: ");
    scanf("%d", &n);
    printf("f: ");
    scanf("%d", &p);
    for(i=1; i<=p; i++)
    {
        k*=n;
    }
    printf("%d", k);

    return 0;
}
