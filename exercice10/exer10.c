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

int Somme(int tab[], int n)
{
    int somme = 0;
    for (int i = 0; i < n; i++)
    {
        somme += tab[i];
    }
    return somme;
}
int Maximun(int tab[], int n)
{

    int max = tab[0];
    for (int i = 0; i < n; i++)
    {
        if (tab[i] > max)
        {
            max = tab[i];
        }
    }
    return max;
}
int Minimun(int tab[], int n)
{

    int mini = tab[0];
    for (int i = 0; i < n; i++)
    {
        if (tab[i] < mini)
        {
            mini = tab[i];
        }
    }
    return mini;
}

int main()
{
    int tab[100], n;

    printf("Donner la tail du tableau: \t");
    scanf("%d", &n);
    Saisir(tab, n);
    afficher(tab, n);
    printf("la somme des case du tableau est : %d\n", Somme(tab, n));
    printf("le max  tableau est : %d\n", Maximun(tab, n));
    printf("le min du tableau est : %d\n", Minimun(tab, n));

    return 0;
}