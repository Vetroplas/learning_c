#include <stdio.h>
#include <ctype.h>

#define MAX         ('Z' - 'A' + 1)
#define SUBOR   "A.TXT"

void zisti_pocet_znakov(FILE *fr, int pocty[]);
void vytvor_histogram(int pocty[]);

int main(void)
{
    FILE *fr;
    int pocty[MAX];

    if ((fr = fopen(SUBOR, "r")) == NULL){
        printf("Subor %s sa nedal otvorit.\n", SUBOR);
        return 1;
    }

    zisti_pocet_znakov(fr, pocty);

    if (fclose(fr) ==  EOF){
        printf("Subor %s nebol zatvoreny.\n", SUBOR);
        return 1; 
    }

    vytvor_histogram(pocty);

    return 0;
}

void zisti_pocet_znakov(FILE *fr, int pocty[])
{
    int c,i;

    // nulovanie pola
    for (i = 0; i < MAX; i++){
        pocty[i] = 0;
    }

    while ((c = getc(fr)) != EOF)
    {
        if (isalpha(c))
        {
            i = toupper(c) - 'A';
            pocty[i]++; 
        }
    } 
}
void vytvor_histogram(int pocty[])
{
    for (int i = 0; i < MAX; i++){
        printf("%c: %3i ",(i + 'A'), pocty[i]);
        for (int j = 0; j < pocty[i]; j ++)
        {
            putchar('*');
        }
        putchar('\n');
    }
}