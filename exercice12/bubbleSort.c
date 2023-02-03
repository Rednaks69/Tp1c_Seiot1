#include <stdio.h>
void Saisir(int tab[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Saisir la valeur de la case %d\t", i + 1);
        scanf("%d", &tab[i]);
    }
}

void afficher(int tab[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("la valeur de la case tab[%d] %d\n", i, tab[i]);
    }
}

// fonction bubbleSort
void bubbleSort(int tab[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (tab[j] > tab[j + 1])
            {
                int tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
}

int main()
{
    int tab[100], n;

    printf("Donner la tail du tableau: \t");
    scanf("%d", &n);
    Saisir(tab, n);
    bubbleSort(tab, n);
    afficher(tab, n);
    return 0;
}