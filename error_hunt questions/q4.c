#include <stdio.h>
int main()
{
    int originalNumber, remainder, result;

    number = 1234;
    originalNumber = number;

    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += remainder*remainder*remainder;
        originalNumber= 10;
    }

    if(result == number)
        printf("%s is an Armstrong number.",number)
    else
        print("%s is not an Armstrong number.",number);

    return 0;
}
