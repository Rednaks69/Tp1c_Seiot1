#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char str[5];
    char *ptr = str;
    int count = 0;

    printf("entrer une chaine de caractaire\t");
    fgets(str, 10, stdin);
    str[strlen(str) - 1] = ' ';

    while (*(ptr) != ' ')
    {
        *ptr++;
        count++;
    }

    printf("la chaine que vous avez enter est: %s\t,et sa longeur est: %d \n", str, count);

    return 0;
}