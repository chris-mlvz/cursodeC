#include <stdio.h>

int main()
{
    int n = 10;
    int i;
    for (i = 0; i < n; i++)
    {
        continue;
        printf("El valor actual de i es %d \n", i);
    }
    printf("El valor actual de i es %d \n", i);
}
