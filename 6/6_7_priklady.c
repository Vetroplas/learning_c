#include <stdio.h>

int main()
{
    // FILE *fr, *fw;
    // int c;

    // if ((fr = fopen("ORIG.TXT", "r")) == NULL){
    //     printf("Subor ORIG.TXT sa nepodario otvorit\n");
    //     return 1;   //ukonci program, kde 1 znamena chybu
    // }
    // if ((fw = fopen("KOPIA.TXT", "w")) == NULL){
    //     printf("Subor KOPIA.TXt sa nepodarilo otvorit\n");
    //     return 1;   //ukonci program, kde 1 znamena chybu
    // }

    // while ((c = getc(fr)) != EOF)
    //   putc(c, fw);

    // if (fclose(fw) == EOF){
    //     printf("Subor KOPIA.TXT sa nepodarilo uzavriet\n");
    // }

    // if (fclose(fr) == EOF){
    //     printf("Subor ORIG.TXT sa nepodarilo uzavriet\n");
    // }

    //Priklad
    FILE *fr;
    int c,
        najdlhsi = 0,
        pocet = 0;
    
    if ((fr = fopen("ORIG.TXT", "r")) == NULL){
        printf("Subor ORIG.TXT sa nepodarilo otvorit\n");
        return 1;       //koniec kvoli chybe
    }
    while ((c = getc(fr)) != EOF){
        putchar(c >= 'a' && c <= 'z' ? c + 'A' - 'a' : c);
        if (c == '\n'){
            if (najdlhsi < pocet){
                najdlhsi = pocet;
            }
            pocet = 0;
        }
        else {
            pocet++;
        }
    }
    
    printf("najdlhsi riadok obsahoval %d znakov.\n", najdlhsi);

    if (fclose(fr) == EOF){
        printf("Subor ORIG.TXT sa nepodarilo uzavriet\n");  
        return 1;       
    }
    return 0;
}