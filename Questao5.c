#include <stdio.h>

void lerString(char *str)
{
    char c;
    int i = 0;
    while ((c = getchar()) != '\n')
    {
        str[i++] = c;
    }
    str[i] = '\0';
}


void invertaString(char *str)
{
    int tamanho = 0;
    while (str[tamanho] != '\0')
    {
        tamanho++;
    }

    for (int i = 0; i < tamanho / 2; i++)
    {
        char temp = str[i];
        str[i] = str[tamanho - i - 1];
        str[tamanho - i - 1] = temp;
    }
}

int main()
{
    char original[100];
    printf("Digite a string: ");
    lerString(original);

    invertaString(original);

    printf("String invertida: %s\n", original);

    return 0;
}
