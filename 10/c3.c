#include <stdio.h>

#define SUBOR   "TEXT.TXT"

long citaj_znak(FILE *fr, char *p_c);

int main(void)
{
    char c;
    long int sum_char;
    FILE *fr;

    if((fr = fopen(SUBOR, "r")) == NULL){
        printf("Subor %s sa nepodarilo otvorit\n", SUBOR);
        return 1;
    }

    while (1)
    {
        sum_char = citaj_znak(fr, &c);
        if (c == EOF)
            break;
        else
            putchar(c);
    }
    
    printf("\nSucet vsetkych znakov je %ld.\n", sum_char - 1);

    if(fclose(fr) == EOF){
        printf("Subor %s sa nepodarilo zatvorit\n", SUBOR);
    }
    return 0;
}

long citaj_znak(FILE *fr, char *p_c)
{
    static long int sum = 0;
    *p_c = getc(fr);
    return (++sum);
}