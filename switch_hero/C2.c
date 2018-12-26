// write a c program to take a number as input from the user and check if the number is a palindrome.
#include <stdio.h>
void main()
{
  int num, originalNum, rev=0;
  printf("enter a number:");
  scanf("%d", &originalNum);
  num = originalNum;
  while(num!=0)
  {
    d=num%10;
    rev=rev*10+d;
    num/=10;
  }
  if(originalNum == rev)
  {
    printf("It is a palindrome");
  }
  else
  {
    printf("its not a palindrome");
  }
}
