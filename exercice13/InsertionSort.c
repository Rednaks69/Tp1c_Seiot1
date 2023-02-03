#include <stdio.h>
#include <math.h>

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

// Fonction InsertionSort
void insertionSort(int tab[], int n)
{
    int i, tmp, j;
    for (i = 1; i < n; i++)
    {
        tmp = tab[i];
        j = i - 1;
        while (j >= 0 && tab[j] > tmp)
        {
            tab[j + 1] = tab[j];
            j = j - 1;
        }
        tab[j + 1] = tmp;
    }
}

int main()
{
    int tab[100], n;

    printf("Donner la tail du tableau: \t");
    scanf("%d", &n);
    Saisir(tab, n);
    insertionSort(tab, n);
    afficher(tab, n);
    return 0;
}