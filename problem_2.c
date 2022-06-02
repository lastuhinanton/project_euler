#include <stdio.h>

int main(void)
{
    int i;
    int terminate;
    int sum = 0;
    int first_term = 0, second_term = 1, temp;

    scanf("%d", &terminate);
    
    while (second_term < terminate)
    {
        if (second_term % 2 == 0)
        {
            sum += second_term;
        }

        temp = second_term;
        second_term = first_term + second_term;
        first_term = temp;
    }

    printf("%d\n", sum);
    
    return 0;
}


