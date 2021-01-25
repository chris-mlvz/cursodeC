#include <stdio.h>
int n = -1;

int main()
{
    if(n > 10 && n < 20)
        printf("El número es mayor que diez");
    else if(n == 10)
        printf("El número es diez");
    else if(n >= 20)
        printf("El número es mayor que veinte");
    else if(n < 10 && n >= 0)
        printf("El número esta en el rango de 0 al 9");
    else
        printf("Error no quiero numeros negativos");
    return 0;
}