#include <stdio.h>
#include <math.h>
#include <time.h>


int main(void)
{

    clock_t start, end;
    double cpu_time_used;
    
    start = clock();
    long int a = 1, b = 1, c = 1;

    while (a <= 1000)
    {
        b = a + 1;
        while (b <= 1000)
        {
            c = 1000 - a - b;
            if (pow(c, 2) == pow(a, 2) + pow(b, 2))
            {
                printf("%ld", (a * b * c));
                printf("\n %ld %ld %ld \n", a, b, c);
                end = clock();
                cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
                printf("%lf\n", cpu_time_used);
                return 0;
            }
            b++;
        }
        a++;
    }

}

