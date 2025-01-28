#include <stdio.h>
#include <string.h>

int main(){
    char s3[20];
    char s[] ="Pedram";
    char s2[] = "Passendi";

    strcpy(s3,s);
    strcat(s3,s2);
    printf("%s\n", s3);

    const double Ped = 1.098;
    printf("The value of Ped is: %.2f\n", Ped);
}
