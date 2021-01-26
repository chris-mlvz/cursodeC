#include <stdio.h>

int add(int a, int b);

int main()
{
    printf("The result is: %d", add(100,100));
    return 0;
}

int add(int a, int b)
{
    int add;
    add = a + b;
    //printf("The result is: %d", add);
    return add;
}
