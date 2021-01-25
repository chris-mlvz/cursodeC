#include <stdio.h>
int n = 10;

int  main()
{
    do
    {
        printf("N es igual a %d\n", n);
        n = n - 1;
    } while (n > 10);
    printf("Hemos salido del bucle porque n es igual o menor que 10");
    return 0;
}