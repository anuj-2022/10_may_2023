#include <stdio.h>
int addition(int, int);
int main()
{
    int a, b;
    int (*ip) (int, int);
    printf ("Enter Two Numbers : ");
    scanf ("%d %d", &a, &b);
    ip = addition;
    int result = (*ip) (a, b);
    printf ("Result  : %d", result);
    return 0;
}

int addition(int a, int b)
{
    int c = a + b;
    return c;
}
