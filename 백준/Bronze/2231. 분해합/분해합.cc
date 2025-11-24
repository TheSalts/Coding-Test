#include <stdio.h>
#define MAX 1000000

int sum_of_digits(int number)
{
    int sum = 0;
    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main()
{
    int input;
    scanf("%d", &input);
    for (int i = 0; i < input; i++)
    {
        int calcNumber = i;
        calcNumber += sum_of_digits(i);
        if (calcNumber == input)
        {printf("%d\n", i);return 0;}
    }
    printf("%d\n", 0);
    return 0;
}