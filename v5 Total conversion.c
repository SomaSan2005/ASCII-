#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
   printf("convertitore che segue la tebella ASCII");

    char carattere = ' ';
    printf("\ninserisci il carratere da convertire in numero: ");
    scanf("%c", &carattere);
    printf("\nil carratere è stato convertito in: %d\n", carattere);

    printf("\n-------------------------------------");

    int numero = 0;
    printf("\ninserisci il numero da convertire in carrattere: ");
    scanf("%d", &numero);
    printf("il carratere è stato convertito in: %c\n", numero);

    printf("\n-------------------------------------");

    int numeroBinario[100], numeroDecimale, i;
    system("cls");
    printf("\nInserire il numero da convertire da convertire in binario: ");

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

    printf("\n-------------------------------------");

    char c;
    printf("\nInserire il carattere da convertire in binario: ");
    c = getchar();
    for (int j = 7; j >= 0; --j)
        putc(((c & (1 << j)) >> j) + '0', stdout);
    putc('\n', stdout);
}