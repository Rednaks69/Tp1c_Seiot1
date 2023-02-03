#include <stdio.h>

void SaisirMatices(int matrice1[][10], int matrice2[][10], int line1, int colonne1, int line2, int colonne2)
{
    int i, j;
    printf("\nEnter elements of matrix 1:\n");
    for (i = 0; i < line1; ++i)
    {
        for (j = 0; j < colonne1; ++j)
        {
            printf("Enter elements a%d%d: ", i + 1, j + 1);
            scanf("%d", &matrice1[i][j]);
        }
    }

    printf("\nEnter elements of matrix 2:\n");
    for (i = 0; i < line2; ++i)
    {
        for (j = 0; j < colonne2; ++j)
        {
            printf("Enter elements b%d%d: ", i + 1, j + 1);
            scanf("%d", &matrice2[i][j]);
        }
    }
}

void afficheMatice(int matrice[][10], int lines, int colonnes)
{
    for (int i = 0; i < lines; ++i)
        for (int j = 0; j < colonnes; ++j)
        {
            printf("%d   ", matrice[i][j]);
            if (j == colonnes - 1)
            {
                printf("\n\n");
            }
        }
}

void multiplyMatrices(int matrice1[][10], int matrice2[][10], int mult[][10], int line1, int colonne1, int line2, int colonne2)
{
    int i, j, k;
    for (i = 0; i < line1; ++i)
    {
        for (j = 0; j < colonne2; ++j)
        {
            mult[i][j] = 0;
        }
    }
    for (i = 0; i < line1; ++i)
    {
        for (j = 0; j < colonne2; ++j)
        {
            for (k = 0; k < colonne1; ++k)
            {
                mult[i][j] += matrice1[i][k] * matrice2[k][j];
            }
        }
    }
}

int main()
{
    int matrice1[10][10], matrice2[10][10], mult[10][10], line1, colonne1, line2, colonne2, i, j, k;

    printf("Entrer le nombre de line et colonnes de la premiere matrice");
    scanf("%d %d", &line1, &colonne1);

    printf("Entrer le nombre de line et colonnes de la deuxieme matrice ");
    scanf("%d %d", &line2, &colonne2);
    while (colonne1 != line2)
    {
        printf("Erreur!\n");
        printf("Entrer le nombre de line et colonnes de la premiere matrice ");
        scanf("%d%d", &line1, &colonne1);
        printf("Entrer le nombre de line et colonnes de la premiere matrice ");
        scanf("%d%d", &line2, &colonne2);
    }

    SaisirMatices(matrice1, matrice2, line1, colonne1, line2, colonne2);

    multiplyMatrices(matrice1, matrice2, mult, line1, colonne1, line2, colonne2);
    printf("\nla matrice multiplication est \n");
    afficheMatice(mult, line1, colonne2);

    return 0;
}