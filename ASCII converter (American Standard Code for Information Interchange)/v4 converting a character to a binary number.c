/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGHT 100

int main()
{
    char str[MAX_LENGHT];

    printf("Inserire la stringa: ");
    fgets(str, MAX_LENGHT-1, stdin);

    size_t lenght = strlen(str);
    for(size_t i = 0; i < lenght; ++i)
    {
        for(int j = 7; j >= 0; --j)
            putc((str[i] & (1 << j)) ? '1' : '0', stdout);

        putc(' ', stdout);
    }

    putc('\n', stdout);

    return 0;
}*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char c;

    printf("Inserire il carattere da convertire in binario: ");
    c = getchar();

    for(int j = 7; j >= 0; --j)
        putc(((c & (1 << j)) >> j) + '0', stdout);

    putc('\n', stdout);

    return 0;
}

