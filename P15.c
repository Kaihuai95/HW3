#include <stdio.h>

int maximum(int x, int y, int z);

int main(void)
{
    int n1;
    int n2;
    int n3;

    printf("Enter three integers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("Maximum is: %d\n", maximum(n1, n2, n3));
}

int maximum(int x, int y, int z)
{
    int max = x;

    if (y > max)
    {
        max = y;
    }

    if (z > max)
    {
        max = z;
    }

    return max;
}