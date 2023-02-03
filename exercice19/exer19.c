#include <stdio.h>

int fibonacci(int n)
{
    if ((n == 1) || (n == 0))
    {
        return (n);
    }
    else
    {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}

int main()
{
    int n, i = 0;
    printf("Entrer le  nombre of termes: ");
    scanf("%d", &n);
    printf("\nSeries Fibonnaci \n");
    while (i < n)
    {
        printf("%d ", fibonacci(i));
        i++;
    }
    printf("\n");

    return 0;
}