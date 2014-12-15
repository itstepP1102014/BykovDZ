#include <stdio.h>
#include <stdlib.h>

    int first_number,second_number;
{
        printf("Enter first number\n");
        scanf("%d",&first_number);
        printf("Enter second number\n");
        scanf("%d",&second_number);
        printf("%d + %d = %d \n",first_number,second_number,first_number+second_number);
        printf("%d - %d = %d \n",first_number,second_number,first_number-second_number);
        printf("%d * %d = %d \n",first_number,second_number,first_number*second_number);
        printf("%d / %d = %d \n",first_number,second_number,first_number/second_number);
        printf("%d %% %d = %d \n",first_number,second_number,first_number%second_number);
}
