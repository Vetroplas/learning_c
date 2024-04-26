#include <stdio.h>

#define MIN     (-1)
#define MAX     1
#define KROK    0.2

double pol1(double x);
double pol2(double x);
void oddelenie(double min, double max, double krok, double (*p_f)());


int main(void)
{
    oddelenie(MIN, MAX, KROK, pol1);
    oddelenie(-2.0, 2.0, 0.1, pol2);

    return 0;
}

double pol1(double x)
{
    return (x * x + 8);
}

double pol2(double x)
{
    return (x * x * x -3);
}

void oddelenie(double min, double max, double krok, double (*p_fd)())
{
    for (double x = min; x <= max + 0.1; x += krok){
        printf("%5.1f %8.3f\n", x, p_fd(x));
    }
    
}