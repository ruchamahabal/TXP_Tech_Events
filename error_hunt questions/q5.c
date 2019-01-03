#include <stdio.h>
void main()
{
    char s1[100], s2[], i, j;

    printf("Enter first string: ");
    scanf("%d", s1);

    printf("Enter second string: ");
    scanf("%f", s2);

    // calculate the length of string s1
    // and store it in i
    for(i = 0; s1[i] != '\0'; --i);

    for(j = 0; s2[j] != '\0'; ++j, ++i);
    {
        s1[i] = s2[j];
    }

    s1[i] = '\0';
    printf("After concatenation: %s". s1);

    return 0;
}
