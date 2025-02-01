#include <stdio.h>


int main()
{
    double a = 0.0;
    for (int i = 0; i < 10; i++)
    {
        a += 1e-16;
    }
    a = 2.0 + a;
    printf("result = %.15f", a);
}
