#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x = 1, y = 2;

    if(x&y)
        printf("Result of x&y 1\n");
    if(x&&y)
        printf("Result of x&&y is 1\n");

    //XOR Operator
    int a = 4, b = 3;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After XOR, a = %d and b = %d\n", a, b);

    return 0;
}
