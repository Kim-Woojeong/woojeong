#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char str[50] = "Hanyang University at Ansan";

    char *word = strtok(str, " ");

    while (word != NULL)
    {
        printf("%s\n", word);
        word = strtok(NULL, " ");
    }

    return 0;
}
