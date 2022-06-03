#include <stdio.h>
#include <math.h>

int square_of_sum(int num);
int square_of_numbers(int num);

int main(void)
{

    int number, result;
    scanf("%d", &number);

    result = square_of_sum(number) - square_of_numbers(number);
     
    printf("%d\n", result);

    return 0;
}

int square_of_sum(int num)
{
    int i = 1, sum = 0;
    while (i <= num)
    {
        sum += i;
        i++;
    }
    
    return pow(sum, 2);
}

int square_of_numbers(int num)
{
    int i = 1, sum = 0;
    while (i <= num)
    {
        sum = sum + pow(i, 2);
        i++;
    }

    return sum;
}
