#include <stdio.h>
#include <ctype.h>

//  Pr.1
// #define N   5
// int sucet = 0;

// int main(){
//     for (int i = 1; i <= N; i++){
//     sucet = sucet + i;
//     }   

//     printf("Sucet prvych %d-tich cisel je %d\n", N, sucet);
// }


//  Pr.2
// #define EOLN    '*'

// int c, sum_alpha = 0, sum_numbers = 0;
// int chars[30];

// int main(){
//     printf("Zadaj lubovolne znaky, z nich moze byt max 30 pismen, ktore potom prevediem na velke. Ukonci zadanim '*'.\n");
//     while((c = getchar()) != EOLN){
//         if (isdigit(c))
//         {
//             sum_numbers++;
//         }else if(isalpha(c)){
//             chars[sum_alpha] = toupper(c);
//             sum_alpha++;
//         }
          
//     }
//     printf("Pocet cisel bol: %d\n ", sum_numbers);
//     printf("Tvoje pismena premenene na velke:\n");
//     for(int i = 0; i <= sum_alpha; i++ ){
//         printf("%c", chars[i]);
//     }
// }

//  Pr.3
// #define na_tretiu(x)  ((x) * (x) * (x))

// int i = 5, j = 2;

// int main(){
//     printf("%d\n", na_tretiu(3));
//     printf("%d\n", na_tretiu(i));
//     printf("%d\n", na_tretiu(2 + 3));
//     printf("%d\n", na_tretiu(i * 5 + 1));

// }

//  Pr.4
// #define je_velke(c)     (((c) >= 'A' && (c) <= 'Z') ? 1 : 0) 

// int c;
// int main(){
//     c = getchar();
//     if (je_velke(c)){
//         printf("Velke pismeno\n");
//     }
// }

//Pr.5
// #define mozne_vytlacit(c)   ((c) >= 32 && (c)<= 126)
// int temp = 0;

// int main(){
//     for (int i = 0; i <= 127; i++){
//         if (mozne_vytlacit(i)){
//             printf("%c ", i);
//             temp++;
//         }
//         if(temp == 10 || i == 127){
//             printf("\n");
//             temp = 0;
//         }
            
//     }
// }

//Pr.6
// #define nacitaj_int(i)  (scanf("%d",&i), i)

// int main(void){
//     int j, k;

//     printf("Zadaj cele cislo: ");

//     if ((j = nacitaj_int(k)) == 0)
//         printf("Bola nacitana nula: j = %d, k = %d\n", j, k);
//     else
//         printf("Nacitane cisla: j = %d, k = %d\n", j, k);

// }

// Pr.8
FILE *fr;

int c, parne, n, new_line;

int main(void){
    printf("Zadaj 'Y' pre nacitanie cisel zo terminalu, inak ich ich nacitava zo suboru ");
    c = getchar();
    while (getchar() != '\n');

    if(c == 'Y' || c == 'y'){
        fr = stdin;
        new_line = 0;
    }else{
        fr = fopen("CISLA.TXT","r");
        new_line = 1;
    }

    for (int i = 1; i <= 10; i++){
        printf("Zadaj %d. cislo: ", i);
        fscanf(fr, "%d", &n);
        if(new_line){
            printf("%d\n", n);
        }
        if ((n % 2) == 0 && n != 0 ){
            parne++;
        }
    }
    printf("Pocet parnych ciesle je %d\n", parne);

    if(fr != stdin){
        fclose(fr);
    }
    return 0;
}


