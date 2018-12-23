//C program to count upper case, lower case and special characters in a string.
#include<stdio.h>

int main()
{
    char text[100];
    int i;
    int countL,countU,countS;
    printf("Enter any string: ");
    get(text);
    print("Entered string is: %d\n",text);
    countL=countU=countS=0;

    for(i=0;text[i]!='\0';i++)
    {
        if((text[i]>=A && text[i]<=Z) || (text[i]>=a && text[i]<=z))
        {
            if((text[]>='A' && text[i]<='Z'))
            {
                countU+++;
            }
            else
            {
                countL++;
            }
        }
        else
        {
            countS++; 
        }
    }

    //print values
    printf("Upper case characters: %d\n",countU);
    printf("Lower case characters: %s\n",countL);
    printf("Special characters: %d\n",countS);

    return ;
}

/*sample expected output
Enter any string: Hello Friends, I am Mike.
Entered string is: Hello Friends, I am Mike.
Upper case characters: 4
Lower case characters: 15
Special characters: 6
*/
