#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroBinario[100], numeroDecimale, i;
    system("cls");
    printf("Inserire il numero da convertire: ");

    scanf("%d", &numeroDecimale);
    for (i = 0; numeroDecimale > 0; i++)
    {
        numeroBinario[i] = numeroDecimale % 2;
        numeroDecimale = numeroDecimale / 2;
    }
    printf("\nIl numero in formato binario e': ");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", numeroBinario[i]);
    }
}