#include <stdio.h>
#include <math.h>

int inverseNombre(int num);

int main()
{
    int num, inverse;

    printf("entrer un nombre ");
    scanf("%d", &num);

    inverse = inverseNombre(num);

    printf("l'inverse du nombre %d est %d\n", num, inverse);

    return 0;
}

int inverseNombre(int num)
{

    int digit = (int)log10(num);

    if (num == 0)
        return 0;

    return ((num % 10 * pow(10, digit)) + inverseNombre(num / 10));
}