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

// fonction partielle
int partition(int tab[], int indexDebut, int indexFin)
{
    int element_a_pivoter = tab[indexFin];
    int i = (indexDebut - 1);
    for (int j = indexDebut; j <= indexFin - 1; j++)
    {
        if (tab[j] <= element_a_pivoter)
        {
            i++;
            int tmp = tab[i];
            tab[i] = tab[j];
            tab[j] = tmp;
        }
    }
    int tmp = tab[i + 1];
    tab[i + 1] = tab[indexFin];
    tab[indexFin] = tmp;
    return (i + 1);
}
// fonction QuickSort
void quickSort(int tab[], int indexDebut, int indexFin)
{
    if (indexDebut < indexFin)
    {
        int pivot = partition(tab, indexDebut, indexFin);

        quickSort(tab, indexDebut, pivot - 1);
        quickSort(tab, pivot + 1, indexFin);
    }
}

int main()
{
    int tab[100], n;

    printf("Donner la tail du tableau: \t");
    scanf("%d", &n);
    Saisir(tab, n);
    quickSort(tab, 0, n - 1);
    afficher(tab, n);
    return 0;
}