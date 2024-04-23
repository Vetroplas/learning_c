#include <stdio.h>

int vyskyt(FILE *fr, char c);

int main(void)
{
    FILE *fr;
    char meno[100];
    char hladany_znak;
    
    printf("Zdaj meno suboru: ");
    scanf("%s", &meno);
    while(getchar() != '\n');   //Vyprazdnenie buferu klavesnice

    if ((fr = fopen(meno,"r")) == NULL)
    {
        printf("Subor %s sa nedal otvorit\n", meno);
        return 1;
    }

    printf("Zdaj hladany znak: ");
    hladany_znak = getchar();
    //while(getchar() != '\n'); // tu uz vyprazdnenie buferu klavesnice netreba, lebo dalej ziadne znaky necitame a getchar() precita len prvy znak

    printf(" V subore %s sa nachadza znak %c presne %d-krat\n", meno, hladany_znak, vyskyt(fr, hladany_znak));

    if (fclose(fr) ==  EOF){
        printf("Subor %s nebol zatvoreny.\n", meno);
    }

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