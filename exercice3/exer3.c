#include <stdio.h>
int nombre_naturels(int n);

int main()
{
    int n;
    printf("saisir un nombre n\t");
    scanf("%d", &n);
    printf(" et leur somme est %d\n", nombre_naturels(n));

    return 0;
}
int nombre_naturels(int n)
{
    int somme = 0;
    printf("les nombres naturels multiple de 3 et 5 sont: \t");
    for (int i = 1; i < n; i++)
    {
        if ((i % 3 == 0) || (i % 5 == 0))
        {
            printf("%d", i);
            printf("\t");
            somme += i;
        }
    }
    return somme;
}