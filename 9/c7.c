#include <stdio.h>

int vyskyt(FILE *fr, char c);
double vypis_suboru(void);
void vypis(FILE *fr);

int main(void)
{
    printf("Return value of function is %.1f\n",vypis_suboru());
    return 0;
    
}

int vyskyt(FILE *fr, char c)
{
    char temp;
    int count = 0;
    while ((temp = getc(fr)) != EOF)
    {
        if(temp == c){
            count++;
        }
    }
    return count;

}

double vypis_suboru(void)
{
    FILE *fr;
    char meno[100];
    
    printf("Zdaj meno suboru: ");
    scanf("%s", meno);
    while(getchar() != '\n');   //Vyprazdnenie buferu klavesnice

    if ((meno[0] == 'K' || meno[0] == 'k') && meno[1] == '\0'){
        return 2.2;
    }

    if ((fr = fopen(meno,"r")) == NULL)
    {
        printf("Subor %s sa nedal otvorit\n", meno);
        return 1.1;
    }

    vypis(fr);

    if (fclose(fr) ==  EOF){
        printf("Subor %s nebol zatvoreny.\n", meno);
    }
    return 0.5;
}

void vypis(FILE *fr){
    char temp;
    while((temp = getc(fr)) != EOF){
        putchar(temp);
    }
}