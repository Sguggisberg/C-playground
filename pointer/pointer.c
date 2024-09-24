#include <stdio.h>

int main()
{
    int a = 42;
    int *p = &a;

    printf("Speicher Adresse von a %p\n", (void *)p);
    printf("Speicher Referenz von b %p\n", &p);
    printf("p deref %d\n", *p);
    return 0;
}
