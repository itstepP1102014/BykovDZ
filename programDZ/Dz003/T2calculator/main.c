#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Russian");
    int n;
    int n2;
    int k;
    printf("1: ");
    scanf(" %d", &n);
    printf("2: ");
    scanf(" %d", &n2);
    k=n+n2;
    printf(" %d+%d=%d\n", n, n2, k);
    k=n-n2;
    printf(" %d-%d=%d\n", n, n2, k);
    k=n*n2;
    printf(" %d*%d=%d\n", n, n2, k);
    k=n/n2;
    printf(" %d/%d=%d\n", n, n2, k);
    k=n%n2;
    printf(" %d%%%d=%d\n", n, n2, k);
    return 0;
}
