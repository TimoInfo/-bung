#include <stdio.h>

#include "function.h"
#include "print.h"

int main(void)
{
    int wert1, wert2, su;

    printf("Geben Sie die erste Zahl ein: ");
    scanf("%d", &wert1);

    printf("Geben Sie die zweite Zahl ein: ");
    scanf("%d", &wert2);

    su = add_integer(wert1, wert2);

    printf("Ergebnis der Addition ist: %d\n", su);

    print_batman();
    return 0;
}
