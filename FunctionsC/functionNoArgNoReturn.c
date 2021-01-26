#include <stdio.h>

void demo(void);

int main()
{
    demo();
    return 0;
}

void demo()
{
    int a, b, sum;
    a = 100;
    b = 100;
    sum = a + b;
    printf("The result is: %d", sum);
}
