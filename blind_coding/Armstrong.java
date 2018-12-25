/*Write a java program to take a number from user and check whether it is an armstrong number or not*/
import java.util.Scanner;
 class Armstrong
 {
   public static void main(String args[])
   {
     int number,result=0,remainder,originalNumber;
     Scanner s = new Scanner(System.in);
     System.out.println("Enter a number");
     originalNumber = s.nextInt();
     number = originalNumber;
     while(number != 0)
     {
       remainder = number%10;
       result += remainder*remainder*remainder;
       number/=10;
     }
     if(result == originalNumber)
         System.out.println("It is an armstrong number");
      else{
        System.out.println("It is not an armstrong number");
      }
   }
 }
