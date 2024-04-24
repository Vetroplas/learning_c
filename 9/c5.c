#include <stdio.h>

void vypis(FILE *fr);

#define SUBOR   "TEST.TXT"

int main(void)
{
    FILE *fr;

    if((fr = fopen(SUBOR, "r")) == NULL){
        printf("Subor %s sa nedal otvorit.", SUBOR);
        return 1;
    }

    vypis(fr);

    fclose(fr);

    return 0;
}

void vypis(FILE *fr){
    char temp;
    while((temp = getc(fr)) != EOF){
        putchar(temp);
    }
}