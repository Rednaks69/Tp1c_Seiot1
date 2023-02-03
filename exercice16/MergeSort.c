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

// Merge Function
void merge(int tab[], int indexGauche, int milieuIndex, int indexDroite)
{
    int i, j, k;
    int nombre1 = milieuIndex - indexGauche + 1;
    int nombre2 = indexDroite - milieuIndex;
    int tabGauche[nombre1], tabDroite[nombre2];
    for (i = 0; i < nombre1; i++)
        tabGauche[i] = tab[indexGauche + i];
    for (j = 0; j < nombre2; j++)
        tabDroite[j] = tab[milieuIndex + 1 + j];
    i = 0;
    j = 0;
    k = indexGauche;
    while (i < nombre1 && j < nombre2)
    {
        if (tabGauche[i] <= tabDroite[j])
        {
            tab[k] = tabGauche[i];
            i++;
        }
        else
        {
            tab[k] = tabDroite[j];
            j++;
        }
        k++;
    }
    while (i < nombre1)
    {
        tab[k] = tabGauche[i];
        i++;
        k++;
    }
    while (j < nombre2)
    {
        tab[k] = tabDroite[j];
        j++;
        k++;
    }
}
// Merge Sort Function in C
void mergeSort(int tab[], int indexGauche, int indexDroite)
{
    if (indexGauche < indexDroite)
    {
        int milieuIndex = indexGauche + (indexDroite - indexGauche) / 2;
        mergeSort(tab, indexGauche, milieuIndex);
        mergeSort(tab, milieuIndex + 1, indexDroite);
        merge(tab, indexGauche, milieuIndex, indexDroite);
    }
}

int main()
{
    int tab[100], n;

    printf("Donner la tail du tableau: \t");
    scanf("%d", &n);
    Saisir(tab, n);
    mergeSort(tab, 0, n - 1);
    afficher(tab, n);
    return 0;
}