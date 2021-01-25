#include <stdio.h>
int opt1 = 0;
int opt2 = 2;

int main()
{
    printf("Bienvenido a platzi store:\n");
    printf("Opción 0 para platzi bebidas \n");
    printf("Opción 1 para platzi comidas \n");
    printf("Opción 2 para platzi postres \n");
    //este programa genera menus segun lo que el usuario elija
    if (opt1 == 0)
    {
        printf("Usted eligió la opción 0, vera nuestro menu de bebidas elija una:\n");
        printf("Opción 0 para platzi cola cero \n");
        printf("Opción 1 para platzi cola normal \n");
        printf("Opción 2 para platzi piña colada \n");
        if (opt2 == 0)
            printf("Usted eligio una platzi cola cero, mm rico");
        else if (opt2 == 1)
            printf("Usted eligió una platzi cola con mucha azúcar, mm rico");
        else if (opt2 == 2)
            printf("Usted eligio una platzi piña colada con azúcar, mm rico");
        else
            printf("Opción invalida");
    }
    else if (opt1 == 1)
    {
        //Aqui va el menu de alimentos
    }
    else if (opt1 == 1)
    {
        //Aqui va el menu de postres
    }
    else
    {
        // mensaje de manejo de opción invalida
    }
    return 0;
}