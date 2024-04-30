#include <stdio.h>

int main(void)
{
    printf("Velkost int je %ld bajtov\n", sizeof(int));
    printf("Velkost float je %ld bajtov\n", sizeof(float));
    printf("Velkost char je %ld bajtov\n", sizeof(char));
    printf("Velkost double je %ld bajtov\n", sizeof(double));

    return 0;
}