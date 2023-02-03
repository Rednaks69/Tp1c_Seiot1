#include <stdio.h>
#include <math.h>

int convertionBinaireAuDecimal(long long n);

int main()
{

    long long n;
    printf("Saisir un nombre binaire ");
    scanf("%lld", &n);
    printf("%lld en binaire = %d en decimal \n", n, convertionBinaireAuDecimal(n));
    return 0;
}

int convertionBinaireAuDecimal(long long n)
{
    int NombreDecimal = 0, i = 0, nbr;

    while (n != 0)
    {
        nbr = n % 10;
        n /= 10;
        NombreDecimal += nbr * pow(2, i);
        i++;
    }
    return NombreDecimal;
}