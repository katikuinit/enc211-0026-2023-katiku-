#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, c;
    a = b = c =0;
    printf("Enter three numbers a, b, c:");
    scanf("%d %d %d", &a, &b, &c);
    printf("sum: %d\n", a + b + c);

    return 0;
}
