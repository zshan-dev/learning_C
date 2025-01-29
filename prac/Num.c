#include <stdio.h>
#include <string.h>
#include <float.h>

int main()
{
    const double Ped = 1.23456789;
    char s3[20];
    char s[] = "Pedram";
    char s2[] = "Passendi";
    printf("second string: %c\n", s[3]);
    // strcpy(s3, s);
    strcat(s3, s2);

    printf("%s\n", s3);

    float result = 10 / 2.0;
    printf("float result: %2.f\n", result);
    printf("The value of Ped is: %.2f\n", Ped);

    // Minimum width = 10 , 4 digits after decimal
    printf(" Printing options for Ped = %10.4f:\n", Ped);

    const float F = 1.23456789f;
    const double D = 1.23456789;
    const long double L = 1.23456789L;
    printf(" Original values :\n");
    printf(" Float : %.8f\n", F);
    printf(" Double : %.8lf\n", D);
    printf(" Long Double : %.8Lf\n\n", L);
    printf(" Rounded values :\n");
    printf(" Float : %.20f\n", F);
    printf(" Double : %.20lf\n", D);
    printf(" Long Double : %.20Lf\n", L);

    const unsigned int goals = 3000;
    unsigned int games = 3000;

    float avg_goal = printf("The aeverage goals per game was: %.2f\n", (float)goals / games);
}
