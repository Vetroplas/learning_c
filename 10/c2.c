#include <stdio.h>
#include <ctype.h>

int set(char c);

char user_input;

int main(void)
{
    printf("Zadaj lubovolny znak: \n");
    user_input = getchar();
    while (getchar != '\n');
    

}

int set(char c)
{
    if (isupper(c) || islower(c)){
        return 1;
    }else
        return 0;
}