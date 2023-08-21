#include <stdio.h>
#include <stdlib.h>

int rand(void);

int main(void)
{
    int i;
    for (i = 0; i < 6; i++)
        printf("%d", rand());

    return (0);
}
