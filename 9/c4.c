#include <stdio.h>

#define SUBOR   "TEST.TXT"
#define ZNAK    '*'

int vyskyt(FILE *fr, char c);

int main(void)
{
    FILE *fr;
    if ((fr = fopen(SUBOR,"r")) == NULL)
    {
        printf("Subor %s sa nedal otvorit\n", SUBOR);
        return 1;
    }

    printf(" V subore %s sa nachadza znak %c presne %d-krat\n", SUBOR, ZNAK, vyskyt(fr, ZNAK));

    if (fclose(fr) ==  EOF){
        printf("Subor %s nebol zatvoreny.\n", SUBOR);
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