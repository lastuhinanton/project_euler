#include <stdio.h>

int Is_prime(unsigned long long int index);

int main(void)
{
    unsigned long long int index = 2, sum = 0;
    unsigned long int number;

    scanf("%ld", &number);

    while (index < number)
    {
        int flag = Is_prime(index);
        if (flag)
        {
            sum += index;
            printf("%lld\n", index);
        }

        if (index == 2)
        {
            index += 1;
        }
        else
        {
            index += 2;
        }
    }

    printf("%lld\n", sum);

    return 0;
}


int Is_prime(unsigned long long int index)
{
    int flag = 1, count = 2;
    while (count <= (index / 2))
    {
        if (index % count == 0)
        {
            flag = 0;
            break;
        }
        count++;
    }

    return flag;
}

        
