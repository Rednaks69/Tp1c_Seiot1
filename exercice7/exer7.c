#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char str[5];

    printf("entrer une chaine de caractaire\t");
    fgets(str, 10, stdin);
 

    printf("la chaine que vous avez enter est: %s\t,et sa longeur est: %d \n", str, strlen(str));

    return 0;
}
