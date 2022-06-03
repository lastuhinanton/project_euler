#include <stdio.h>

int Is_palindrome(int number);

int main(void)
{
    int i, j;
    int number;
    int flag;
    int max_palindrome = 0;
    
    for (i = 999; i > 99; i--)
    {
        for (j = 999; j > 99; j--)
        {
            number = i * j;
            flag = Is_palindrome(number);
            if (flag)
            {
                if (number > max_palindrome)
                {
                    max_palindrome = number;
                }
            }
        }
    }
            
    printf("%d\n", max_palindrome);
        
    return 0;
}


int Is_palindrome(int number)
{
    int i = 0;
    int count = 0;
    int array[6];
    
    while (number != 0)
    {
        array[count] = number % 10;
        number = number / 10;
        count++;
    }     

    count = count - 1;
    int check = count;
    
    while (i <= (check / 2))
    {
        if (array[i] != array[count])
        {
            return 0;
        }
        count--;
        i++;
    }

    return 1;
}
            
        







































