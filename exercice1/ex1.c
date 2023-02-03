#include <stdio.h>

int estPaire(int n)
{
    return !(n & 1);
}

int main()
{
    int n;
    printf("saisir un nombre\t");
    scanf("%d", &n);
    if (estPaire(n))
    {
        printf("paire\n");
    }
    else
    {
        printf("impaire\n");
    }

    return 0;
}