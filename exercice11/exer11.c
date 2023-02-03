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

void sup_Dupliq(int tab[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (tab[i] == tab[j])
            {
                for (int k = j; k < n; k++)
                {
                    tab[k] = tab[k + 1];
                }
                n--;
                j--;
            }
        }
    }
}

int main()
{
    int tab[100], n;

    printf("Donner la tail du tableau: \t");
    scanf("%d", &n);
    Saisir(tab, n);
    sup_Dupliq(tab, n);
    afficher(tab, n);
}