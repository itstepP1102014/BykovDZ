#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Russian");
    char a[] = "Мама";
    char b[] = "Мыла";
    char c[] = "Раму";
    printf(" %s %s %s\n", a, b, c);
    printf(" %s %s %s\n", c, a, b);
    printf(" %s %s %s\n", b, c, a);
    printf(" %s %s %s\n", c, b, a);
    return 0;
}
