#include <conio.h>
int main ()
{
  int c[] = { 70, 80, 60, 75 };
  int python[] = {90,87,78,89};
  int linux[] = {78,90,60,70};
  int java[] = {80,97,78,67};
  float sum=0;
  for(int i=0;i<4;i++)
  {
      sum=sum+c[i];
  }
  printf("Average of C:%f",sum/4.0);
  sum=0;
  for(int i=0;i<4;i++)
  {
      sum=sum+python[i];
  }
  printf("\nAverage of python:%f",sum/4.0);
  sum=0;
  for(int i=0;i<4;i++)
  {
      sum=sum+linux[i];
  }
  printf("\nAverage of linux:%f",sum/4.0);
  sum=0;
  for(int i=0;i<4;i++)
  {
      sum=sum+java[i];
  }
  printf("\nAverage of Java:%f",sum/4.0);
  getch();
}
