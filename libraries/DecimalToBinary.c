// 1er paso Dividir el valor entre 2 y almacenar el resto, mod, en un array
// 2do paso dividir otra vez entre 2 y almacenar el restante
// Repetir hasta que nuestro número ya no se pueda dividir

#include <stdio.h>
#include <stdlib.h>

int binaryNumber[12], n, i;

main()
{
    system("clear");
    //system("color 9F");
    printf("Ingrese un valor decimal\n");
    scanf("%d", &n);
    printf("Usted va a convertir número %d a binario\n", n);


    
    while (n > 0)
    {
        binaryNumber[i] = n % 2;
        n = n / 2;
        i++;
    }
    i = i - 1;

    printf("La conversión de la conversión es: ");

    while (i >= 0)
    {
        printf("%d", binaryNumber[i]);
        i--;
    }

    return 0;
}
