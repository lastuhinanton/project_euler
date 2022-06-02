#include <stdio.h>

int Is_prime(long long int number);

int main(void)
{
    long long int i = 1;
    int flag;
    long long int term_number;

    scanf("%lld", &term_number);
    
    while (1)
    {
           flag = Is_prime(i);
           if (flag)
           {
               if (term_number % i == 0)
               {
                   term_number = term_number / i;
               }
           }
           if (term_number == 1)
           {
               printf("%lld\n", i);
               break;
           }
           i++;
    }

    return 0;
}

int Is_prime(long long int number)
{
    int flag = 0;
    long long int index = 1;

    while (index <= (number / 2))
    {
        if (number % index == 0)
        {
           flag++;
        } 

        if (flag > 1)
        {
            break;
        }

        index++;
    }

    if (flag > 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }

}




















       
