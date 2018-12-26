#include <stdio.h>
#include <string.h>
void main()
{
  char str1[100];
  printf("Enter a string:");
  gets(str1);
  for(int i=0;str1[i]!='\0';i++)
  {
    if(str1[i]>='a' && str1[i]<='z')
       str1[i] = str1[i] - 32;
    else if(str1[i]>='A' && str1[i]<='Z')
       str1[i] = str1[i] + 32;
  }
  printf("given string in toggled state:%s",str1);
}
