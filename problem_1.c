#include <stdio.h>

int main(void)
{
    int i;
    int prime, val_one, val_second, sum = 0;

    scanf("%d %d %d", &prime, &val_one, &val_second);

    for (i = 0; i < prime; i++)
    {
        if (i % val_one == 0)
        {
            sum = sum + i;
        }
        else
        {
            if (i % val_second == 0)
            {
                sum = sum + i;
            }
        }
    }

    printf("%d\n", sum);

    return 0;
}
