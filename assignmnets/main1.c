#include <stdio.h>

int main()
{

    long double a = 2.0;
    for (int i = 0; i < 10; i++)
    {
        a -= 1e-16;
    }
    printf(" result = %0.15Lf\n", a);
}