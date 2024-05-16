#include <stdio.h>

int ahoj(void);

typedef int (* P_FCE)(void);

int main(void)
{
    P_FCE p_ahoj;

    p_ahoj = ahoj;

    while(p_ahoj() < 20)
        ;
    
    putchar('\n');
    return 0;

}

int ahoj(void){
    static int pocet = 0;

    printf("%2d ahoj ", ++pocet);
    return pocet;
}

