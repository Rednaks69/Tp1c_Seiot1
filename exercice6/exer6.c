#include <stdio.h>
#include <math.h>

int calcu_Diametre(int r);
int calcu_Circenference(int r);
int calcu_Air(int r);

int main()
{

    int r;
    printf("Saisir le rayon du cercle\t");
    scanf("%d", &r);
    printf("le diametre du cercle est %d\n", calcu_Diametre(r));
    printf("la circonference du cercle est %d\n", calcu_Circenference(r));
    printf("l'Air du cercle est %d\n", calcu_Air(r));

    return 0;
}
int calcu_Diametre(int r)
{
    return 2 * r;
}
int calcu_Circenference(int r)
{
    return 2 * M_PI * r;
}
int calcu_Air(int r)
{
    return M_PI * pow(r, 2);
}