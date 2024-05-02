#include <stdio.h>
#include <ctype.h>

int set(char c_int, char *c_out);

char c_input, c_output;

int main(void)
{
    do {
        printf("Zadaj jeden lubovolny znak ('*' = koniec): ");
        c_input = getchar();
        while (getchar() != '\n');

        if (set(c_input, &c_output) == 1)
            printf("Znak %c sa zmenil na %c.\n", c_input, c_output);
        else
            printf("Znak %c sa nezmenil ('%c')\n", c_input, c_output);
    } while ( c_input != '*');
}

int set(char c_in, char *c_out)
{
    if (isalpha(c_in) != 0){
        *c_out = (isupper(c_in) != 0 )? tolower(c_in) : toupper(c_in);
        return 1;
    }else{
        *c_out = c_in;
        return 0;
    }
}