#include <stdio.h>

#define POCET   10

double maxim(double pole[], int pocet);

int main(void)
{
    double f[POCET];
    int i;

    for (i = 0; i < POCET; i++){
        printf("Zadaj %d. cislo: ", i + 1);
        scanf("%lf", &f[i]);
    }

    printf("Max. z %d cislic je %f\n", POCET, maxim(f, POCET));
    return 0;
}

double maxim(double pole[], int pocet){
    double *p_max = pole;
    double *p_pom;


    for (p_pom = pole + 1 ; p_pom < pole + pocet; p_pom++){
        if (*p_pom > *p_max){
            p_max = p_pom;
        }
    }
    return *p_max;
}
