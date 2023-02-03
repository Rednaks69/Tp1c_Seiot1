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
void trasposeMatrice(int matrice[][100], int transpose[][100], int line, int colonne)
{
    for (int i = 0; i < line; ++i)
        for (int j = 0; j < colonne; ++j)
        {
            transpose[j][i] = matrice[i][j];
        }
}

int main()
{

    int line, colonne;
    int a[100][100], b[100][100];
    printf("entrer le nombre de lines de la matrice a transposer: \n");
    scanf("%d", &line);
    printf("entrer le nombre de colonnes de la matrice a transposer: ");
    scanf("%d", &colonne);
    printf("saisir la  matrice\n");
    saisirMatrice(a, line, colonne);
    printf("\nla matice saisie est :\n");
    afficheMatice(a, line, colonne);
    trasposeMatrice(a, b, line, colonne);
    printf("\nle transopse de la matice est :\n");
    afficheMatice(b, line, colonne);
    return 0;
}