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

// SelectionSort
void selectionSort(int tab[], int n)
{
    int i, j, min;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
            if (tab[j] < tab[min])
                min = j;
        int tmp = tab[min];
        tab[min] = tab[i];
        tab[i] = tmp;
    }
}

int main()
{
    int tab[100], n;

    printf("Donner la tail du tableau: \t");
    scanf("%d", &n);
    Saisir(tab, n);
    selectionSort(tab, n);
    afficher(tab, n);
    return 0;
}