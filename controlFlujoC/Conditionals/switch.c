#include <stdio.h>
int opt1 = 0;
int opt2 = 0;

int main()
{
    printf("Bienvenido a platzi store :\n");
    printf("Opcion 0 para platzi bebidas \n");
    printf("Opcion 1 para platzi comidas \n");
    printf("Opcion 2 para platzi postres \n");
    switch (opt1)
    {
    case 0:
        printf("Usted eligió la opción 0, vera nuestro menú de bebidas elija una:\n");
        printf("Opcion 0 para platzi cola cero \n");
        printf("Opcion 1 para platzi cola normal \n");
        printf("Opcion 2 para platzi piña colada \n");
        switch (opt2)
        {
        case 0:
            printf("Usted eligió una platzi cola cero, mmm rico");
            break;
        default:
            break;
        }
        break;
    case 1:
        /* Dispersar, correr a los intrusos */
        break;
    case 2:
        /* Dispersar, correr a los intrusos */
        break;
    default:
        break;
    }
}
