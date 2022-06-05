#include <stdio.h>

unsigned long int sum_of_div(unsigned long int number);

int main(void)
{
    unsigned long int count = 1;
    unsigned long int check = 1;
    
    while (sum_of_div(check) <= 500)
    {
        check += ++count;
    }

    printf("%ld\n", check);
    
    return 0;
}

unsigned long int sum_of_div(unsigned long int number)
{
    unsigned long int count = 1;
    unsigned long int i = 2;

    while (i <= number)
    {
        unsigned long int c = 0;
        while (number % i == 0)
        {
            c++;
            number = number / i;
        }
        count *= (c + 1);
        i++;
    }

    return count;
}
                
        
        
