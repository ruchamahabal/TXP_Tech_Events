using System;
public class exercise15
{
	public static void Main()
	{
	    string str1;
        char[] arr1;
        int l,i;
        l=0;
        char ch;
        Console.Write("\n\nReplace lowercase characters by uppercase and vice-versa :\n");
        Console.Write("--------------------------------------------------------------\n");
       Console.Write("Input the string : ");
       str1 = Console.ReadLine();
       l=str1.Length;
       arr1 = str1.ToCharArray(0, l); // Converts string into char array.

        Console.Write("\nAfter conversion, the string is : ");
        for(i=0; i < l; i++)
         {
          ch=arr1[i];
           if (Char.IsLower(ch)) // check whether the character is lowercase
              Console.Write(Char.ToUpper(ch)); // Converts lowercase character to uppercase.
              else
              Console.Write(Char.ToLower(ch)); // Converts uppercase character to lowercase.
        }
    Console.Write("\n\n");
   }
}
