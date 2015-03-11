#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=32;
    while(n<=127)
    {
        printf("%2c ----- %3d ", n, n);
        if(n%8==7)
        {
            printf("\n");
        }
        n+=1;

     }
        return 0;

}
