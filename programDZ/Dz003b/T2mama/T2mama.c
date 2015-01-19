#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Russian");
    int a = Мама;
    int b = Мыла;
    int c = Раму;
    printf(" %c %c %c\n", a, b, c);
    printf(" %c %c %c\n", c, a, b);
    printf(" %c %c %c\n", b, c, a);
    printf(" %c %c %c\n", c, b, a);
    return 0;
}

