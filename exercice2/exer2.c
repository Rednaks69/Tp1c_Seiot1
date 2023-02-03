#include <stdio.h>

int au_cube(int n);

int main()
{
    int n;
    printf("saisir un numbre n\t");
    scanf("%d", &n);
    printf("le cube de %d est %d\n", n, au_cube(n));
}

int au_cube(int n)
{

    return n * n * n;
}