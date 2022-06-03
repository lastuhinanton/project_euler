#include <stdio.h>

long int main(void)
{
    int i;
    int flag;
    long int first_num, last_num;
    long int result = 1;
    scanf("%ld %ld", &first_num, &last_num);

    long int number = last_num;
    while (number >= last_num / 2)
    {
        if ((result % number) != 0)
        {
            result = result * number;
        }
        number--;
    }

    while (1)
    {
        flag = 0;
        result = result / 2;
        i = last_num;

        while (i >= last_num / 2)
        {
           if ((result % i) != 0)
           {
               flag = 1;
               break;
           }
           i--;
        }

        if (flag)
        {
            result = result * 2;
            break;
        }
    }

    printf("%ld\n", result);

    return 0;
}
        
        
    
    
