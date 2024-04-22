#include <stdio.h>


int main()
{
    // Pr.4
    // int c;
    // int numbers = 0;
    // int result[2];
    // printf("Zadaj dva znaky v rozsahu 0-9 a A-F:\n");
    // while (numbers < 2){
    //     c = getchar();
    //     if (c >= '0' && c <= '9')
    //     {
    //         result[numbers] = c - 48;
    //         numbers++;
    //     }
    //     else if (c >= 'A' && c <= 'F')
    //     {
    //         result[numbers] = c - 55;
    //         numbers++;
    //     }
    //     else if (c != '\n'){
    //         printf("nespraavny znak\n");
    //     }
    // }
    // printf("%d\n", (result[0]*16) + result[1]);

    // Pr.5
    // int c;
    // if ((c = getchar()) >= 'A' && c <= 'Z'){
    //     printf("%d\n", c);
    // }

    //Pr.6
    // int c;
    // if (((c = getchar()) >= 48 && c <= 90) || (c >= 97 && c <= 122)){
    //     printf("Alfanumericky znak\n");
    // }
    // else {
    //     printf("Interpunkcny znak\n");
    // }

    //Pr.7
    // int c;
    // if((c = getchar()) >= 48 && c <= 57){
    //     printf("cislica: '%c'\n",c);
    // }
    // else if (c >= 65 && c <= 90){
    //     printf("velke pismeno: '%c'\n",c);
    // }
    // else if (c >= 97 && c <= 122){
    //     printf("male pismeno: '%c'\n",c);
    // }
    // else{
    //     printf("interpunkcne znamienko: '%c'\n",c);
    // }

    //Pr.9 a 10
    // int i = getchar() - 48;
    // int j = getchar() - 48;
    // if (i == 5 && ++j == 3){
    //     printf("podmienka i == 5 && ++j == 3 je platna\n");
    // }
    // else{
    //     printf("podmienka i == 5 && ++j == 3 je neplatna\n");
    // }
    //     if (i == 5 || ++j == 3){
    //     printf("podmienka i == 5 || ++j == 3 je platna\n");
    // }
    // else{
    //     printf("podmienka i == 5 || ++j == 3 je neplatna\n");
    // }

    //Pr.11
    // int c;
    // int sum_velke = 0, sum_male = 0;
    // while((c = getchar()) != '\n')
    // {
    //     if (c >= 97 && c <= 122){
    //         sum_male++;
    //     }
    //     else if(c >= 65 && c <= 90){
    //         sum_velke++;
    //     }
    // }
    // printf("velkych pismen bolo %d a malych %d\n",sum_velke, sum_male);

    //Pr.12
    // int n;  
    // printf("Pocet cisel, ktore chcete zadat (1-9, pre ukoncenie zadajte cokolvek mimo toho to rozsahu): \n");
    // scanf("%d", &n);
    // int array[n];
    // int sum = 0;
    // for (int i = 0; i < n; i++){
    //     printf("Zadaj c.%d ", i + 1);
    //     scanf("%d", &array[i]);
    //         if  (array[i] >= 25 && array[i] <=38){
    //             sum++;
    //         }
    // }
    // printf("pocet cisle v rozsahu 25-38: %d\n", sum);

    //Pr.14
    // long int fakt;
    // printf("Zadajte cislo, pre ktore chcete vyratat taktorial: ");
    // scanf("%ld", &fakt);
    // for (int i = (fakt - 1); i >= 2; i--){
    //     fakt = fakt * i;
    // }
    // printf("%ld\n", fakt);

    //Pr.15
    int f, g;
    printf("Zadaj dve cele kladne cisla, program nasledne vypise vsetky parne cele cisla v intervale urcenom tymito dvom cislami: ");
    scanf("%d", &f);
    scanf("%d", &g);
    if ( f < g){
        for ( int i = f; i <= g; i++ ){
            if ( (i % 2) == 0 && i != 0){
                printf("%d ", i);
            }
        }
    }
    if (f > g){

        for ( int i = f; i >= g; i-- ){
            if ( (i % 2) == 0 && i != 0){
                printf("%d ", i);
            }
        }
    }
    
    
}