#include <stdio.h>
int n = 20;

int main()
{
    while (n > 10)
    {
        printf("N es igual a %d\n", n);
        n = n - 1;
    }
    printf("Hemos salido del bucle porque n es igual o menor que 10");
    return 0;
}   

