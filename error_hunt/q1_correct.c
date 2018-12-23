
   /*
    * C program to accept N numbers and arrange them in an ascending order
    */

   #include <stdio.h>
   void main()
   {

       int i, j, a, n, number[5]= {45,77,12,3,9};
      
       for (i = 0; i < 5; ++i)
       {

           for (j = i + 1; j < 5; ++j)
           {

               if (number[i] > number[j])
               {

                   a =  number[i];
                   number[i] = number[j];
                   number[j] = a;

               }

           }

       }

       printf("The numbers arranged in ascending order are given below \n");
       for (i = 0; i < 5; ++i)
           printf("%d\n", number[i]);

   }
