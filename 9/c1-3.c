#include <stdio.h>

//Pr.2

// void troj(char c, int n);

// char user_c;
// int user_n;

// int main(void)
// {
//     printf("Zdaj znak, z ktoreho bude vytvoreny trojuholnik: ");
//     user_c = getchar();
//     while(getchar() != '\n');
//     printf("Zdaj pocet riadkov trojuholnika (cele cislo): ");
//     scanf("%d", &user_n);
//     troj(user_c, user_n);

// }

// void troj(char c, int n)
// {
//     int space;
//     for (int i = 1; i <= n; i++){
//         space = n - i;
//         for (int j = 1; j <= space; j++){
//             printf(" ");
//         }
//         for (int k = 1; k <= ((i*2)-1); k++){
//             printf("%c",c);  
//         }
//         printf("\n");  
//     }
// }

//Pr.3
#define MENO_SUBORU "TEST.TXT"

FILE *fr;

int exist();

int main(void)
{
    printf("Subor %s %s \n", MENO_SUBORU, (exist()) ? "existuje" : "neexstuje");
}

int exist()
{
    if ((fr = fopen(MENO_SUBORU, "r")) != NULL){
        fclose(fr);
        return 1;
    }else{
        return 0;
    }

}