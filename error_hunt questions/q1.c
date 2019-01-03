   #include <stdio.h>
   int main()
   {

       int i, j, a, n, number[]= [45,77,12,3,9];

       for (i = 0; i < 5; ++i]
       {

  for (j = i + 1; j < 5; ++j)
           {
if (number[i] > number[j])
               {

                   a =  number[i];
                   number[i] = number[j]
                   number[j] = a;
               }}}

       print("The numbers arranged in ascending order are given below \n");
       for (i = 0; i < 5; ++i)
           print("%d\n", number[i]);

   }
