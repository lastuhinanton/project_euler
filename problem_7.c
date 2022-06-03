#include <stdio.h>
#include <time.h>


long int Is_prime(long int number);

long int main(void)
{
    clock_t start, end;
    double cpu_time_used;

    unsigned long int terminate;
    scanf("%ld", &terminate);

    start = clock();

    int i = 0, flag;
    long int number = 2;
    
    while (i < terminate)
    {
        flag = Is_prime(number);
        if (flag)
        {
            i++;
            if (i == terminate)
            {
                printf("%ld\n", number);
                end = clock();
                cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
                printf("%lf\n", cpu_time_used);

                return 0;
            }
        }
        number++;
    }
}

long int Is_prime(long int number)
{
    long int index = 2;
    int flag = 1;
    
    while (index <= (number / 2))
    {
        if (number % index == 0)
        {
            flag = 0;
        }

        index++;
    }

    if (flag)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
