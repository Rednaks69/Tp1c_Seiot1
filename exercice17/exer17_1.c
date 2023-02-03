#include <stdio.h>

void saisirMatrice(int matrice[][100], int line, int colonne)
{

    for (int i = 0; i < line; ++i)
        for (int j = 0; j < colonne; ++j)
        {
            printf("Enter element %d%d: ", i + 1, j + 1);
            scanf("%d", &matrice[i][j]);
        }
}

void sommeMatice(int matrice1[][100], int matrice2[][100], int matrice3[][100], int lines, int colonnes)
{

    for (int i = 0; i < lines; ++i)
        for (int j = 0; j < colonnes; ++j)
        {
            matrice3[i][j] = matrice1[i][j] + matrice2[i][j];
        }
}

void afficheMatice(int matrice[][100], int lines, int colonnes)
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

int main()
{
    int line1, colonne1, line2, colonne2;
    int a[100][100], b[100][100], sum[100][100];

    printf("entrer le nombre de lines pour la premiere matrice: \n");
    scanf("%d", &line1);
    printf("entrer le nombre de colonnes pour la premiere matrice: ");
    scanf("%d", &colonne1);

    printf("entrer le nombre de lines pour la deuxieme matrice: ");
    scanf("%d", &line2);
    printf("entrer le nombre de colonnes pour la deuxieme matrice:");
    scanf("%d", &colonne2);

    while ((line1 != line2) || (colonne1 != colonne2))
    {
        printf(" on ne peut pas les additionner");
        printf("entrer le nombre de lines pour la premiere matrice: ");
        scanf("%d", &line1);
        printf("entrer le nombre de colonnes pour la premiere matrice: ");
        scanf("%d", &colonne1);

        printf("entrer le nombre de lines pour la deuxieme matrice: ");
        scanf("%d", &line2);
        printf("entrer le nombre de colonnes pour la deuxieme matrice:");
        scanf("%d", &colonne2);
    }

    printf("saisir la premierre matrice\n");
    saisirMatrice(a, line1, colonne1);
    printf("saisir la desiemme matrice\n");
    saisirMatrice(b, line2, colonne2);

    sommeMatice(a, b, sum, line1, colonne1);
    printf("la matrice somme est \n");
    afficheMatice(sum, line1, colonne1);

    return 0;
}
