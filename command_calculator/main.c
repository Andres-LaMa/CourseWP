#include "score.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* s = NULL;
    size_t n = 0;

    n = getline(&s, &n, stdin);

    double number = score(s);
    printf("Выражение равно = %f.\n", number);

    free(s);

    return 0;
}