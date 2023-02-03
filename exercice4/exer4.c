#include <math.h>
#include <stdio.h>

int estPremier(int n)
{
    int c = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            c = 0;
            break;
        }
    }
    return c;
}
int estArmstrong(int n)
{
    int nbr, tmp, val_puissance = 0, val_retour;
    double somme = 0.0;
    nbr = n;

    while (nbr != 0)
    {
        nbr /= 10;
        ++val_puissance;
    }

    nbr = n;

    while (nbr != 0)
    {
        tmp = nbr % 10;
        somme += pow((double)tmp, (double)val_puissance);
        nbr /= 10;
    }

    val_retour = (somme == n) ? 1 : 0;

    return val_retour;
}

int main()
{
    int n;
    printf("saisir le nombre a verifier : \t");
    scanf("%d", &n);
    if (estPremier(n))
    {
        printf("premier\n");
    }
    else
    {
        printf("nest pas premier\n");
    }
    if (estArmstrong(n))
    {
        printf("armstrong\n");
    }
    else
    {
        printf("nest pas armstrong\n");
    }

    return 0;
}