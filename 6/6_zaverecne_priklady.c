#include <stdio.h>

int main()
{
    //Pr.6
    // FILE *fr = fopen("CISLA.TXT", "r");
    // double c;
    // double sum = 0;
    // int n = 0;

    // while (fscanf(fr, "$%lf\n",&c) == 1){
    //     sum = sum + c;
    //     n++;

    // }
    // printf("%.2lf\n",sum / n);
    // fclose(fr);

    //Pr.7
    // FILE *fr1, *fr2;

    // fr1 = fopen("ORIG.TXT", "r");
    // fr2 = fopen("KOPIA.TXT", "r");

    // char c1, c2;
    // int len_c1 = 0, len_c2 = 0, identical = 0, differnce = 0;

    // while (c1 = getc(fr1) != EOF)
    // {
    //     len_c1++;
    // }
    // while (c2 = getc(fr2) != EOF)
    // {
    //     len_c2++;
    // }
    
    // rewind(fr1);
    // rewind(fr2);
    // if (len_c1 >= len_c2)
    // {
    //     do 
    //     {
    //         if(((c1 = getc(fr1)) == (c2 = getc(fr2))) && c1 != EOF){
    //             identical++;
    //         }
    //     }while (c1 != EOF);

    //     differnce = len_c1 - identical;
    // }
    // else
    // {
    //     do
    //     {
    //         if(((c2 = getc(fr2)) == (c1 = getc(fr1)))&& c2 != EOF){
    //             identical++;
    //         }
    //     }while(c2 != EOF);

    //     differnce = len_c2 - identical;

    // }
    // if (differnce == 0)
    // {
    //     printf("Subory su zhodne.\n");
    // }
    // else
    // {
    //     printf("Subory sa lisia v %d znakoch.\n", differnce);
    // }


    // fclose(fr1);
    // fclose(fr2);

    //Pr.9

    // FILE *fr,*fw;
    // int c;

    // if ((fr = fopen("ORIG.TXT", "r")) != NULL){
    //     printf("Zadajte O, ak chcete vypisat obsah suboru ORIG.TXT na obrazovku alebo akykolvek iny znak pre zapis do subotu\n");
    //     c = getchar();

    //     while (getchar() != '\n');

    //     if (c == 'O' ||c == 'o')
    //         fw = stdout;
    //     else
    //         fw = fopen("NOVY.TXT", "w");
    // }
    // else{
    //     printf("Subor ORIG.TXT sa nepodarilo otvorit.");
    // }
    // while ((c = getc(fr)) != EOF )
    // {
    //     putc(c, fw);
    // }
    
    // fclose(fr);
    // fclose(fw);

    //Pr.10
    // int c, n = 0;

    // do {
    //     for (int i = 0; i <10 ; i++)
    //     {
    //        printf("%d\n", ++n);
    //     }
    //     printf("Mam pokracovat? [A/N]\n");
    //     c = getchar();
    //     while (getchar() != '\n');    
        
    // }while ( c == 'a' || c == 'A');

    //Pr.11
    FILE *fr = fopen("CISLA.TXT", "r");
    int c;
    double n, sum = 0;

    while(!(feof(fr))){
        while ((c = getc(fr)) == '$');
        ungetc(c, fr);
        fscanf(fr, "%lf\n",&n);
        sum = sum + n;
        printf("%lf \n", n);
    }
    printf("Sucet je: %lf\n", sum);

    fclose(fr);

  
    return 0;
    

}