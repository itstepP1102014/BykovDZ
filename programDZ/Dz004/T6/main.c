#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Z=1;
    int L;
    int X;
    int P=0;
    printf("vedite L: ");
    scanf("%d", &L);
    printf("vedite X: ");
    scanf("%d", &X);
    while(Z<=L)
    {
       Z*=X;
       P+=1;
    }
    printf("P=%d", P-1);
    return 0;
}
