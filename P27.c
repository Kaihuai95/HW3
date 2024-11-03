#include <stdio.h>
#include <stdlib.h>

long f(long number);

int main(void)
{
    int i;
    for (i = 0; i <= 10; i++)
    {
        printf("%2d! = %ld\n", i, f(i));
    }
    system("pause");
    return 0;
}

long f(long number)
{
    if (number <= 1)
    {
        return 1;
    }
    else
    {
        return (number * f(number - 1));
    }
}